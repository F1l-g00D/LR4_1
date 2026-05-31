#include <cmath>
#include <cstdlib>
#include <iostream>
#include <rpc.h>

#include "stringrpc.h"

#pragma comment(lib, "Rpcrt4.lib")

using namespace std;

void* __RPC_USER midl_user_allocate(size_t size)
{
    return malloc(size);
}

void __RPC_USER midl_user_free(void* p)
{
    free(p);
}

RPC_STATUS CALLBACK SecurityCallback(RPC_IF_HANDLE, void*)
{
    return RPC_S_OK;
}

extern "C" double Sin(handle_t hBinding, double x)
{
    cout << "Sin(" << x << ") called\n";
    return sin(x);
}

extern "C" double Cos(handle_t hBinding, double x)
{
    cout << "Cos(" << x << ") called\n";
    return cos(x);
}

extern "C" double Sqrt(handle_t hBinding, double x)
{
    cout << "Sqrt(" << x << ") called\n";
    return sqrt(x);
}

extern "C" double Pow(handle_t hBinding, double x, double y)
{
    cout << "Pow(" << x << ", " << y << ") called\n";
    return pow(x, y);
}

int main()
{
    cout << "RPC Math Server Start...\n";

    RPC_STATUS status = RpcServerUseProtseqEp(
        (RPC_WSTR)L"ncacn_ip_tcp",
        RPC_C_PROTSEQ_MAX_REQS_DEFAULT,
        (RPC_WSTR)L"4545",
        NULL);

    if (status) return status;

    status = RpcServerRegisterIf2(
        stringrpc_v1_0_s_ifspec,
        NULL,
        NULL,
        RPC_IF_ALLOW_CALLBACKS_WITH_NO_AUTH,
        RPC_C_LISTEN_MAX_CALLS_DEFAULT,
        (unsigned)-1,
        SecurityCallback);

    if (status) return status;

    status = RpcServerListen(1, RPC_C_LISTEN_MAX_CALLS_DEFAULT, FALSE);

    if (status)
    {
        cout << "RpcServerListen error\n";
        return status;
    }

    return 0;
}
