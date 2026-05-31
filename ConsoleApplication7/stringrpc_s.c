

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for LR4_1-master\LR4_1-master\ConsoleApplication7\stringrpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=IA64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_IA64) 


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>
#include "stringrpc.h"

#define TYPE_FORMAT_STRING_SIZE   7                                 
#define PROC_FORMAT_STRING_SIZE   175                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _stringrpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } stringrpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _stringrpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } stringrpc_MIDL_PROC_FORMAT_STRING;

typedef struct _stringrpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } stringrpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const stringrpc_MIDL_TYPE_FORMAT_STRING stringrpc__MIDL_TypeFormatString;
extern const stringrpc_MIDL_PROC_FORMAT_STRING stringrpc__MIDL_ProcFormatString;
extern const stringrpc_MIDL_EXPR_FORMAT_STRING stringrpc__MIDL_ExprFormatString;

/* Standard interface: stringrpc, ver. 1.0,
   GUID={0x12345678,0x1234,0x1234,{0x12,0x34,0x12,0x34,0x56,0x78,0x9a,0xbc}} */


extern const MIDL_SERVER_INFO stringrpc_ServerInfo;

extern const RPC_DISPATCH_TABLE stringrpc_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE stringrpc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x12345678,0x1234,0x1234,{0x12,0x34,0x12,0x34,0x56,0x78,0x9a,0xbc}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&stringrpc_v1_0_DispatchTable,
    0,
    0,
    0,
    &stringrpc_ServerInfo,
    0x06000000
    };
RPC_IF_HANDLE stringrpc_v1_0_s_ifspec = (RPC_IF_HANDLE)& stringrpc___RpcServerInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC stringrpc_StubDesc;
#ifdef __cplusplus
}
#endif


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const stringrpc_MIDL_PROC_FORMAT_STRING stringrpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Sin */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x18 ),	/* ia64 Stack size/offset = 24 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* ia64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 20 */	0xa,		/* 10 */
			0x21,		/* Ext Flags:  new corr desc, has complex return,  */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x8 ),	/* 8 */

	/* Parameter x */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* ia64 Stack size/offset = 8 */
/* 34 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _RetVal */

/* 36 */	NdrFcShort( 0x2170 ),	/* Flags:  out, return, base type, simple ref, srv alloc size=8 */
/* 38 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
/* 40 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Procedure Cos */

/* 42 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x1 ),	/* 1 */
/* 50 */	NdrFcShort( 0x18 ),	/* ia64 Stack size/offset = 24 */
/* 52 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 54 */	NdrFcShort( 0x0 ),	/* ia64 Stack size/offset = 0 */
/* 56 */	NdrFcShort( 0x10 ),	/* 16 */
/* 58 */	NdrFcShort( 0x24 ),	/* 36 */
/* 60 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 62 */	0xa,		/* 10 */
			0x21,		/* Ext Flags:  new corr desc, has complex return,  */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x8 ),	/* 8 */

	/* Parameter x */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* ia64 Stack size/offset = 8 */
/* 76 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _RetVal */

/* 78 */	NdrFcShort( 0x2170 ),	/* Flags:  out, return, base type, simple ref, srv alloc size=8 */
/* 80 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
/* 82 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Procedure Sqrt */

/* 84 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x2 ),	/* 2 */
/* 92 */	NdrFcShort( 0x18 ),	/* ia64 Stack size/offset = 24 */
/* 94 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* ia64 Stack size/offset = 0 */
/* 98 */	NdrFcShort( 0x10 ),	/* 16 */
/* 100 */	NdrFcShort( 0x24 ),	/* 36 */
/* 102 */	0x40,		/* Oi2 Flags:  has ext, */
			0x2,		/* 2 */
/* 104 */	0xa,		/* 10 */
			0x21,		/* Ext Flags:  new corr desc, has complex return,  */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x8 ),	/* 8 */

	/* Parameter x */

/* 114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* ia64 Stack size/offset = 8 */
/* 118 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _RetVal */

/* 120 */	NdrFcShort( 0x2170 ),	/* Flags:  out, return, base type, simple ref, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
/* 124 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Procedure Pow */

/* 126 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x3 ),	/* 3 */
/* 134 */	NdrFcShort( 0x20 ),	/* ia64 Stack size/offset = 32 */
/* 136 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* ia64 Stack size/offset = 0 */
/* 140 */	NdrFcShort( 0x20 ),	/* 32 */
/* 142 */	NdrFcShort( 0x24 ),	/* 36 */
/* 144 */	0x40,		/* Oi2 Flags:  has ext, */
			0x3,		/* 3 */
/* 146 */	0xa,		/* 10 */
			0x21,		/* Ext Flags:  new corr desc, has complex return,  */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x28 ),	/* 40 */

	/* Parameter x */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x8 ),	/* ia64 Stack size/offset = 8 */
/* 160 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter y */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
/* 166 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter _RetVal */

/* 168 */	NdrFcShort( 0x2170 ),	/* Flags:  out, return, base type, simple ref, srv alloc size=8 */
/* 170 */	NdrFcShort( 0x18 ),	/* ia64 Stack size/offset = 24 */
/* 172 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

			0x0
        }
    };

static const stringrpc_MIDL_TYPE_FORMAT_STRING stringrpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short stringrpc_FormatStringOffsetTable[] =
    {
    0,
    42,
    84,
    126
    };


static const RPC_DISPATCH_FUNCTION stringrpc_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE stringrpc_v1_0_DispatchTable = 
    {
    4,
    (RPC_DISPATCH_FUNCTION*)stringrpc_table
    };


#endif /* defined(_M_IA64) */



/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for LR4_1-master\LR4_1-master\ConsoleApplication7\stringrpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=IA64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_IA64) 




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag18_t;
extern const __midl_frag18_t __midl_frag18;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag18_t __midl_frag18 =
0xc    /* FC64_FLOAT64 */;

static const __midl_frag17_t __midl_frag17 =
{ 
/* *double */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag18
};

static const __midl_frag14_t __midl_frag14 =
{ 
/* Pow */
    { 
    /* Pow */      /* procedure Pow */
        (NDR64_UINT32) 17825856 /* 0x1100040 */,    /* explicit handle */ /* IsIntrepreted, HasComplexReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 40 /* 0x28 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* x */      /* parameter x */
        &__midl_frag18,
        { 
        /* x */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* y */      /* parameter y */
        &__midl_frag18,
        { 
        /* y */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* _RetVal */      /* parameter _RetVal */
        &__midl_frag18,
        { 
        /* _RetVal */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], IsReturn, Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag10_t __midl_frag10 =
{ 
/* Sqrt */
    { 
    /* Sqrt */      /* procedure Sqrt */
        (NDR64_UINT32) 17825856 /* 0x1100040 */,    /* explicit handle */ /* IsIntrepreted, HasComplexReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* x */      /* parameter x */
        &__midl_frag18,
        { 
        /* x */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* _RetVal */      /* parameter _RetVal */
        &__midl_frag18,
        { 
        /* _RetVal */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], IsReturn, Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"



void Sin_ComplexThunk( 
    /* [in] */ handle_t hBinding,
    /* [in] */ double x,
    double *_RetVal)
{
    *_RetVal = Sin(hBinding,x);
}

void Cos_ComplexThunk( 
    /* [in] */ handle_t hBinding,
    /* [in] */ double x,
    double *_RetVal)
{
    *_RetVal = Cos(hBinding,x);
}

void Sqrt_ComplexThunk( 
    /* [in] */ handle_t hBinding,
    /* [in] */ double x,
    double *_RetVal)
{
    *_RetVal = Sqrt(hBinding,x);
}

void Pow_ComplexThunk( 
    /* [in] */ handle_t hBinding,
    /* [in] */ double x,
    /* [in] */ double y,
    double *_RetVal)
{
    *_RetVal = Pow(
       hBinding,
       x,
       y);
}
static const FormatInfoRef stringrpc_Ndr64ProcTable[] =
    {
    &__midl_frag10,
    &__midl_frag10,
    &__midl_frag10,
    &__midl_frag14
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC stringrpc_StubDesc = 
    {
    (void *)& stringrpc___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    stringrpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& stringrpc_ServerInfo,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

static const RPC_DISPATCH_FUNCTION stringrpc_NDR64__table[] =
    {
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    0
    };
static const RPC_DISPATCH_TABLE stringrpc_NDR64__v1_0_DispatchTable = 
    {
    4,
    (RPC_DISPATCH_FUNCTION*)stringrpc_NDR64__table
    };

static const MIDL_SYNTAX_INFO stringrpc_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&stringrpc_v1_0_DispatchTable,
    stringrpc__MIDL_ProcFormatString.Format,
    stringrpc_FormatStringOffsetTable,
    stringrpc__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    (RPC_DISPATCH_TABLE*)&stringrpc_NDR64__v1_0_DispatchTable,
    0 ,
    (unsigned short *) stringrpc_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };


static const SERVER_ROUTINE stringrpc_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)Sin_ComplexThunk,
    (SERVER_ROUTINE)Cos_ComplexThunk,
    (SERVER_ROUTINE)Sqrt_ComplexThunk,
    (SERVER_ROUTINE)Pow_ComplexThunk
    };

static const MIDL_SERVER_INFO stringrpc_ServerInfo = 
    {
    &stringrpc_StubDesc,
    stringrpc_ServerRoutineTable,
    stringrpc__MIDL_ProcFormatString.Format,
    (unsigned short *) stringrpc_FormatStringOffsetTable,
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)stringrpc_SyntaxInfo
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_IA64) */

