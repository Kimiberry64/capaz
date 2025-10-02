#pragma once
#include "capaz.h"

BOOL
CALLBACK
EnumThreadTextProc(
	_In_ HWND   hwnd,
	_In_ LPARAM lParam
);

BOOL
CALLBACK
MoveWindowProc(
	_In_ HWND   hwnd,
	_In_ LPARAM lParam
);

VOID
GetRandomPath(
	_Inout_ PWSTR szRandom,
	_In_    INT   nLength
);

VOID
WINAPI
EnumThreadText(
	VOID
);

BOOL
WINAPI
NoTaskbar(
	VOID
);

VOID
WINAPI
CursorMove(
	VOID
);

VOID
WINAPI
CursorClick(
	VOID
);

VOID
WINAPI
EnumThreadWnd(
	VOID
);