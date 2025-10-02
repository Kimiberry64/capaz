#include "capaz.h"

DWORD dwXorshift;

BOOL
WINAPI
SeedXorshift32(
	_In_ DWORD dwXorSeed
)
{
	dwXorshift = dwXorSeed;
	return TRUE;
}

DWORD
Xorshift32(
	VOID
)
{
	dwXorshift ^= dwXorshift << 13;
	dwXorshift ^= dwXorshift >> 17;
	dwXorshift ^= dwXorshift << 5;

	return dwXorshift;
}