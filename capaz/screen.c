#include "capaz.h"

RECT
GetVirtualScreen(
	VOID
)
{
	RECT rcScreen = { 0 };
	EnumDisplayMonitors( NULL, NULL, MonitorEnumProc, &rcScreen );
	return rcScreen;
}

SIZE
GetVirtualScreenSize(
	VOID
)
{
	RECT rcScreen = GetVirtualScreen( );
	SIZE szScreen = {
		rcScreen.right - rcScreen.left,
		rcScreen.bottom - rcScreen.top
	};
	return szScreen;
}

POINT
GetVirtualScreenPos(
	VOID
)
{
	RECT rcScreen = GetVirtualScreen( );
	POINT ptScreen = {
		rcScreen.left,
		rcScreen.top
	};
	return ptScreen;
}