#include <iostream>
#include <rpc.h>
#include <string>
#include <algorithm>
#include <cctype>

#include "stringrpc.h"

#pragma comment(lib, "Rpcrt4.lib")
//Server
using namespace std;
void* __RPC_USER midl_user_allocate(size_t size)
{
    return malloc(size);
}
RPC_STATUS CALLBACK SecurityCallback(RPC_IF_HANDLE,void*)
{
    return RPC_S_OK;
}

extern "C" int CountVowels(
    handle_t hBinding,
    unsigned char* str)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
    {
        char c = tolower(str[i]);

        if (c == 'a' || c == 'e' ||
            c == 'i' || c == 'o' ||
            c == 'u')
        {
            count++;
        }
    }

    cout << "CountVowels called\n";

    return count;
}

extern "C" int CountWords(
    handle_t hBinding,
    unsigned char* str)
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i]; i++)
    {
        if (!isspace(str[i]))
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << "CountWords called\n";

    return count;
}

extern "C" boolean IsPalindrome(
    handle_t hBinding,
    unsigned char* str)
{
    string s((char*)str);

    string rev = s;

    reverse(rev.begin(), rev.end());

    boolean result = (s == rev);

    cout << "IsPalindrome called\n";

    return result;
}

int main()
{
    cout << "RPC Server Start...\n";

    RPC_STATUS status;

    status = RpcServerUseProtseqEp(
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

    RpcServerListen(1, RPC_C_LISTEN_MAX_CALLS_DEFAULT, FALSE);

    if (status)
    {
        cout << "RpcServerListen error\n";
        return status;
    }

    return 0;
}


void __RPC_USER midl_user_free(void* p)
{
    free(p);
}
