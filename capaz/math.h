#pragma once
#include "capaz.h"

BOOL
WINAPI
SeedXorshift32(
	_In_ DWORD dwXorSeed
);

DWORD
Xorshift32(
	VOID
);