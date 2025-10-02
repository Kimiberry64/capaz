#pragma once
#include "capaz.h"

BOOL
CALLBACK
MonitorEnumProc(
	_In_     HMONITOR hMonitor,
	_In_     HDC      hdcMonitor,
	_In_opt_ PRECT    prcBounds,
	_In_opt_ LPARAM   lParam
);

LRESULT
CALLBACK
NoDestroyWndProc(
	_In_     HWND   hWnd,
	_In_     DWORD  dwMsg,
	_In_opt_ WPARAM wParam,
	_In_opt_ LPARAM lParam
);