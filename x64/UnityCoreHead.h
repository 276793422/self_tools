#pragma once

#include <Windows.h>

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////
	/////		Symbol Core
	/////
	DWORD GetFunctionAddressFromPDB(LPCWSTR lpPath, LPCWSTR* lpNameArray, DWORD dwCount, PVOID* lpAddressArray);


	////////////////////////////////////////////////////////////////////////////////////////////////////
	/////
	/////		Detours Core
	/////
	BOOL Detours_SetHook(PVOID* ppSystemFunction, PVOID pHookFunction);
	BOOL Detours_Unhook(PVOID* ppSystemFunction, PVOID pHookFunction);


#ifdef __cplusplus
}
#endif // __cplusplus
