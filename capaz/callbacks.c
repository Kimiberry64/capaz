#include "capaz.h"

BOOL
CALLBACK
MonitorEnumProc(
	_In_     HMONITOR hMonitor,
	_In_     HDC      hdcMonitor,
	_In_opt_ PRECT    prcBounds,
	_In_opt_ LPARAM   lParam
)
{
	UNREFERENCED_PARAMETER( hMonitor);
	UNREFERENCED_PARAMETER( lParam );

	PRECT prcParam = ( RECT* )lParam;
	UnionRect( prcParam, prcParam, prcBounds );
	return TRUE;
}

LRESULT
CALLBACK
NoDestroyWndProc(
	_In_     HWND   hWnd,
	_In_     DWORD  dwMsg,
	_In_opt_ WPARAM wParam,
	_In_opt_ LPARAM lParam
)
{
	switch ( dwMsg )
	{
	case WM_DESTROY:
	case WM_CLOSE:
	case WM_QUIT:
		return CALLBACK_NULL;
	}
	return DefWindowProcW( hWnd, dwMsg, wParam, lParam );
}