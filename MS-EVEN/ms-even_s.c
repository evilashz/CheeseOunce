

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ms-even.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>
#include "ms-even_h.h"

#define TYPE_FORMAT_STRING_SIZE   691                               
#define PROC_FORMAT_STRING_SIZE   1775                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Deven_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Deven_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Deven_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Deven_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Deven_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Deven_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

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

extern const ms2Deven_MIDL_TYPE_FORMAT_STRING ms2Deven__MIDL_TypeFormatString;
extern const ms2Deven_MIDL_PROC_FORMAT_STRING ms2Deven__MIDL_ProcFormatString;
extern const ms2Deven_MIDL_EXPR_FORMAT_STRING ms2Deven__MIDL_ExprFormatString;

/* Standard interface: eventlog, ver. 0.0,
   GUID={0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}} */


extern const MIDL_SERVER_INFO eventlog_ServerInfo;

extern const RPC_DISPATCH_TABLE eventlog_v0_0_DispatchTable;

static const RPC_SERVER_INTERFACE eventlog___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&eventlog_v0_0_DispatchTable,
    0,
    0,
    0,
    &eventlog_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE eventlog_v0_0_s_ifspec = (RPC_IF_HANDLE)& eventlog___RpcServerInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC eventlog_StubDesc;
#ifdef __cplusplus
}
#endif

extern const NDR_RUNDOWN RundownRoutines[];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Deven_MIDL_PROC_FORMAT_STRING ms2Deven__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ElfrClearELFW */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 22 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 30 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 32 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 36 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 38 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 40 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrBackupELFW */

/* 48 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 60 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0x24 ),	/* 36 */
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 70 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x1 ),	/* 1 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 78 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 80 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 82 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 84 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 86 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 88 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrCloseEL */

/* 96 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x2 ),	/* 2 */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 110 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 112 */	NdrFcShort( 0x38 ),	/* 56 */
/* 114 */	NdrFcShort( 0x40 ),	/* 64 */
/* 116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 118 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 126 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 128 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 130 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrDeregisterEventSource */

/* 138 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x3 ),	/* 3 */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 150 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 152 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 154 */	NdrFcShort( 0x38 ),	/* 56 */
/* 156 */	NdrFcShort( 0x40 ),	/* 64 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 168 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 170 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 172 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrNumberOfRecords */

/* 180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 192 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 194 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 198 */	NdrFcShort( 0x24 ),	/* 36 */
/* 200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 202 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 210 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 212 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 214 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter NumberOfRecords */

/* 216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOldestRecord */

/* 228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x5 ),	/* 5 */
/* 236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 238 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 240 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 242 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0x24 ),	/* 36 */
/* 246 */	NdrFcShort( 0x24 ),	/* 36 */
/* 248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 250 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 258 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 260 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 262 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter OldestRecordNumber */

/* 264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrChangeNotify */

/* 276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 284 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 286 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 288 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 290 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 292 */	NdrFcShort( 0x44 ),	/* 68 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 298 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 306 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 308 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 310 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ClientId */

/* 312 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 316 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter Event */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenELW */

/* 330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x7 ),	/* 7 */
/* 338 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 340 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 344 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 346 */	NdrFcShort( 0x2a ),	/* 42 */
/* 348 */	NdrFcShort( 0x40 ),	/* 64 */
/* 350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 352 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 360 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 362 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 364 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter ModuleName */

/* 366 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter RegModuleName */

/* 372 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 376 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter MajorVersion */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 390 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 392 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 394 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 398 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrRegisterEventSourceW */

/* 402 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 412 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 414 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 416 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 418 */	NdrFcShort( 0x2a ),	/* 42 */
/* 420 */	NdrFcShort( 0x40 ),	/* 64 */
/* 422 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 424 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 432 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 434 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 436 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter ModuleName */

/* 438 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 442 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter RegModuleName */

/* 444 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 448 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter MajorVersion */

/* 450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 462 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 466 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenBELW */

/* 474 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x9 ),	/* 9 */
/* 482 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 484 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 486 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 488 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 490 */	NdrFcShort( 0x2a ),	/* 42 */
/* 492 */	NdrFcShort( 0x40 ),	/* 64 */
/* 494 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 496 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 504 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 506 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 508 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter BackupFileName */

/* 510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter MajorVersion */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 528 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReadELW */

/* 540 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0xa ),	/* 10 */
/* 548 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 550 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 552 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 554 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0x3c ),	/* 60 */
/* 558 */	NdrFcShort( 0x40 ),	/* 64 */
/* 560 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 562 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 570 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 572 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 574 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ReadFlags */

/* 576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RecordOffset */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumberOfBytesToRead */

/* 588 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	NdrFcShort( 0x6a ),	/* 106 */

	/* Parameter Buffer */

/* 594 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 596 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 598 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Parameter NumberOfBytesRead */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinNumberOfBytesNeeded */

/* 606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 608 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventW */

/* 618 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0xb ),	/* 11 */
/* 626 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 628 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 630 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 632 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 634 */	NdrFcShort( 0x8c ),	/* 140 */
/* 636 */	NdrFcShort( 0x40 ),	/* 64 */
/* 638 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xf,		/* 15 */
/* 640 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 648 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 650 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 652 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Time */

/* 654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventType */

/* 660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 670 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 674 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 678 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 680 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 682 */	NdrFcShort( 0x8e ),	/* 142 */

	/* Parameter DataSize */

/* 684 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 686 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 688 */	NdrFcShort( 0x98 ),	/* 152 */

	/* Parameter ComputerName */

/* 690 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 692 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 694 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter UserSID */

/* 696 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 698 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 700 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter Strings */

/* 702 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 704 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 706 */	NdrFcShort( 0xda ),	/* Type Offset=218 */

	/* Parameter Data */

/* 708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 710 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 712 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter Flags */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 718 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 720 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 722 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 724 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Parameter TimeWritten */

/* 726 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 728 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 730 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 734 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrClearELFA */

/* 738 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0xc ),	/* 12 */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 750 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 752 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 754 */	NdrFcShort( 0x24 ),	/* 36 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 760 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 768 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 770 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 772 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 774 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	NdrFcShort( 0x126 ),	/* Type Offset=294 */

	/* Return value */

/* 780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrBackupELFA */

/* 786 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0xd ),	/* 13 */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 798 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 800 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 802 */	NdrFcShort( 0x24 ),	/* 36 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 808 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 816 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 818 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 820 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 822 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenELA */

/* 834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xe ),	/* 14 */
/* 842 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 844 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 846 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 848 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 850 */	NdrFcShort( 0x29 ),	/* 41 */
/* 852 */	NdrFcShort( 0x40 ),	/* 64 */
/* 854 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 856 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 864 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 866 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 868 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter ModuleName */

/* 870 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter RegModuleName */

/* 876 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter MajorVersion */

/* 882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 890 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 894 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 898 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrRegisterEventSourceA */

/* 906 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0xf ),	/* 15 */
/* 914 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 916 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 918 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 920 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 922 */	NdrFcShort( 0x29 ),	/* 41 */
/* 924 */	NdrFcShort( 0x40 ),	/* 64 */
/* 926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 928 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 936 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 938 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 940 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter ModuleName */

/* 942 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 946 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter RegModuleName */

/* 948 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 952 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter MajorVersion */

/* 954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 966 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 968 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 970 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenBELA */

/* 978 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x10 ),	/* 16 */
/* 986 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 988 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 990 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 992 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 994 */	NdrFcShort( 0x29 ),	/* 41 */
/* 996 */	NdrFcShort( 0x40 ),	/* 64 */
/* 998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1000 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 1008 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1010 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1012 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter BackupFileName */

/* 1014 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1018 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter MajorVersion */

/* 1020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 1026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 1032 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1036 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 1038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReadELA */

/* 1044 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1052 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1054 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1056 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1058 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1060 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1062 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1064 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 1066 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1074 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1076 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1078 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ReadFlags */

/* 1080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RecordOffset */

/* 1086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumberOfBytesToRead */

/* 1092 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	NdrFcShort( 0x15e ),	/* 350 */

	/* Parameter Buffer */

/* 1098 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1102 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Parameter NumberOfBytesRead */

/* 1104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1106 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinNumberOfBytesNeeded */

/* 1110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventA */

/* 1122 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1130 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1132 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1134 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1136 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1138 */	NdrFcShort( 0x8c ),	/* 140 */
/* 1140 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xf,		/* 15 */
/* 1144 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1152 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1154 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1156 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Time */

/* 1158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventType */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1168 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1174 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1178 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 1182 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1186 */	NdrFcShort( 0x168 ),	/* 360 */

	/* Parameter DataSize */

/* 1188 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1190 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1192 */	NdrFcShort( 0x172 ),	/* 370 */

	/* Parameter ComputerName */

/* 1194 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1196 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1198 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter UserSID */

/* 1200 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1202 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1204 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter Strings */

/* 1206 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1208 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1210 */	NdrFcShort( 0x17c ),	/* Type Offset=380 */

	/* Parameter Data */

/* 1212 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1214 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1216 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter Flags */

/* 1218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1220 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1222 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1224 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1226 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1228 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Parameter TimeWritten */

/* 1230 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1232 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1234 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum19NotUsedOnWire */

/* 1242 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1252 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1260 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1262 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum20NotUsedOnWire */

/* 1270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1276 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1280 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1290 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 1298 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1308 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1310 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1318 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure ElfrGetLogInformation */

/* 1326 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1334 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1336 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1338 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1340 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1342 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1344 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1346 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 1348 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1356 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1358 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1360 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoLevel */

/* 1362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 1368 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1372 */	NdrFcShort( 0x1ae ),	/* Type Offset=430 */

	/* Parameter cbBufSize */

/* 1374 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1378 */	NdrFcShort( 0x1c4 ),	/* 452 */

	/* Parameter pcbBytesNeeded */

/* 1380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum23NotUsedOnWire */

/* 1392 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1400 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1402 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1412 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure ElfrReportEventAndSourceW */

/* 1420 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1426 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1428 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1430 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1432 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1434 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1436 */	NdrFcShort( 0x8c ),	/* 140 */
/* 1438 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1440 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x10,		/* 16 */
/* 1442 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1450 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1452 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1454 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Time */

/* 1456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventType */

/* 1462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1466 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1472 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1476 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SourceName */

/* 1480 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1482 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1484 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter NumStrings */

/* 1486 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1488 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1490 */	NdrFcShort( 0x1ce ),	/* 462 */

	/* Parameter DataSize */

/* 1492 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1494 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1496 */	NdrFcShort( 0x1d8 ),	/* 472 */

	/* Parameter ComputerName */

/* 1498 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1500 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1502 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter UserSID */

/* 1504 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1506 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1508 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter Strings */

/* 1510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1512 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1514 */	NdrFcShort( 0x1e2 ),	/* Type Offset=482 */

	/* Parameter Data */

/* 1516 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1518 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1520 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter Flags */

/* 1522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1524 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1526 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1528 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1530 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1532 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Parameter TimeWritten */

/* 1534 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1536 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1538 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Return value */

/* 1540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1542 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventExW */

/* 1546 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1554 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1556 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1558 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1560 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1562 */	NdrFcShort( 0x94 ),	/* 148 */
/* 1564 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1566 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 1568 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1576 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1578 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1580 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter TimeGenerated */

/* 1582 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1586 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter EventType */

/* 1588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1592 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1598 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1602 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 1606 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1608 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1610 */	NdrFcShort( 0x22e ),	/* 558 */

	/* Parameter DataSize */

/* 1612 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1614 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1616 */	NdrFcShort( 0x238 ),	/* 568 */

	/* Parameter ComputerName */

/* 1618 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1620 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1622 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter UserSID */

/* 1624 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1626 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1628 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter Strings */

/* 1630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1632 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1634 */	NdrFcShort( 0x242 ),	/* Type Offset=578 */

	/* Parameter Data */

/* 1636 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1638 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1640 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter Flags */

/* 1642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1644 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1646 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1648 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1650 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1652 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Return value */

/* 1654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1656 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventExA */

/* 1660 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1668 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1670 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1672 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1674 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1676 */	NdrFcShort( 0x94 ),	/* 148 */
/* 1678 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1680 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 1682 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1690 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1692 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1694 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter TimeGenerated */

/* 1696 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1700 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter EventType */

/* 1702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1706 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1712 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1716 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 1720 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1722 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1724 */	NdrFcShort( 0x270 ),	/* 624 */

	/* Parameter DataSize */

/* 1726 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1728 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1730 */	NdrFcShort( 0x27a ),	/* 634 */

	/* Parameter ComputerName */

/* 1732 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1734 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1736 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Parameter UserSID */

/* 1738 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1740 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1742 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter Strings */

/* 1744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1746 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1748 */	NdrFcShort( 0x284 ),	/* Type Offset=644 */

	/* Parameter Data */

/* 1750 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1752 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1754 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter Flags */

/* 1756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1758 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1760 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1762 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1764 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1766 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Return value */

/* 1768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1770 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Deven_MIDL_TYPE_FORMAT_STRING ms2Deven__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/*  4 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x28 ),	/* Offset= 40 (48) */
/* 10 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 16 */	NdrFcShort( 0x2 ),	/* 2 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x0 , 
			0x0,		/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 36 */	0x0 , 
			0x0,		/* 0 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcLong( 0x0 ),	/* 0 */
/* 46 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 48 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 56 */	NdrFcShort( 0x4 ),	/* 4 */
/* 58 */	NdrFcShort( 0x4 ),	/* 4 */
/* 60 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 62 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (10) */
/* 64 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 66 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 68 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 70 */	
			0x11, 0x0,	/* FC_RP */
/* 72 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (48) */
/* 74 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 80 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 82 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 84 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 92 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 94 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 96 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 98 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (102) */
/* 102 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 104 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 106 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 112 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 116 */	
			0x11, 0x0,	/* FC_RP */
/* 118 */	NdrFcShort( 0x2 ),	/* Offset= 2 (120) */
/* 120 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 124 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 128 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 130 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 136 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 140 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 142 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	NdrFcLong( 0x100 ),	/* 256 */
/* 152 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 158 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 162 */	
			0x12, 0x0,	/* FC_UP */
/* 164 */	NdrFcShort( 0x28 ),	/* Offset= 40 (204) */
/* 166 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0x6 ),	/* 6 */
/* 170 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 172 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 174 */	NdrFcShort( 0x6 ),	/* 6 */
/* 176 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 178 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (166) */
/* 180 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 182 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 186 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 188 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 190 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 192 */	0x0 , 
			0x0,		/* 0 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 204 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 208 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (182) */
/* 210 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (172) */
/* 216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 218 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 220 */	NdrFcShort( 0x2 ),	/* Offset= 2 (222) */
/* 222 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 224 */	NdrFcShort( 0x4 ),	/* 4 */
/* 226 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 228 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 230 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 232 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 238 */	NdrFcLong( 0x100 ),	/* 256 */
/* 242 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 244 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 246 */	NdrFcShort( 0x4 ),	/* 4 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	0x12, 0x0,	/* FC_UP */
/* 258 */	NdrFcShort( 0xff2e ),	/* Offset= -210 (48) */
/* 260 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 264 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 266 */	NdrFcShort( 0x2 ),	/* Offset= 2 (268) */
/* 268 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 272 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 274 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 276 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 278 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 288 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 290 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 292 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 294 */	
			0x12, 0x0,	/* FC_UP */
/* 296 */	NdrFcShort( 0x18 ),	/* Offset= 24 (320) */
/* 298 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 302 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 304 */	NdrFcShort( 0x2 ),	/* 2 */
/* 306 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 308 */	0x0 , 
			0x0,		/* 0 */
/* 310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 320 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 324 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 326 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 328 */	NdrFcShort( 0x4 ),	/* 4 */
/* 330 */	NdrFcShort( 0x4 ),	/* 4 */
/* 332 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 334 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (298) */
/* 336 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 338 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 340 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 342 */	
			0x11, 0x0,	/* FC_RP */
/* 344 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (320) */
/* 346 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 348 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 350 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 356 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 360 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcLong( 0x100 ),	/* 256 */
/* 370 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 376 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 380 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (384) */
/* 384 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 386 */	NdrFcShort( 0x4 ),	/* 4 */
/* 388 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 390 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 392 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 394 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 400 */	NdrFcLong( 0x100 ),	/* 256 */
/* 404 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 406 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 408 */	NdrFcShort( 0x4 ),	/* 4 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	0x12, 0x0,	/* FC_UP */
/* 420 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (320) */
/* 422 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 424 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 426 */	
			0x11, 0x0,	/* FC_RP */
/* 428 */	NdrFcShort( 0x2 ),	/* Offset= 2 (430) */
/* 430 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 434 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 438 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 440 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 446 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 450 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 452 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 458 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 462 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcLong( 0x100 ),	/* 256 */
/* 472 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 478 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 482 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (486) */
/* 486 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 488 */	NdrFcShort( 0x4 ),	/* 4 */
/* 490 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 492 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 494 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 496 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 502 */	NdrFcLong( 0x100 ),	/* 256 */
/* 506 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 508 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 510 */	NdrFcShort( 0x4 ),	/* 4 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	0x12, 0x0,	/* FC_UP */
/* 522 */	NdrFcShort( 0xfe26 ),	/* Offset= -474 (48) */
/* 524 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 526 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 528 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 530 */	NdrFcShort( 0x2 ),	/* Offset= 2 (532) */
/* 532 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 536 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 538 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 540 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 542 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 548 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 552 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 554 */	
			0x11, 0x0,	/* FC_RP */
/* 556 */	NdrFcShort( 0xfe2a ),	/* Offset= -470 (86) */
/* 558 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcLong( 0x100 ),	/* 256 */
/* 568 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 574 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 578 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (582) */
/* 582 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 586 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 590 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 592 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 598 */	NdrFcLong( 0x100 ),	/* 256 */
/* 602 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 604 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 606 */	NdrFcShort( 0x4 ),	/* 4 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	0x12, 0x0,	/* FC_UP */
/* 618 */	NdrFcShort( 0xfdc6 ),	/* Offset= -570 (48) */
/* 620 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 622 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 624 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcLong( 0x100 ),	/* 256 */
/* 634 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 640 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 644 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 646 */	NdrFcShort( 0x2 ),	/* Offset= 2 (648) */
/* 648 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 650 */	NdrFcShort( 0x4 ),	/* 4 */
/* 652 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 654 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 656 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 658 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 664 */	NdrFcLong( 0x100 ),	/* 256 */
/* 668 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 670 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 672 */	NdrFcShort( 0x4 ),	/* 4 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	0x12, 0x0,	/* FC_UP */
/* 684 */	NdrFcShort( 0xfe94 ),	/* Offset= -364 (320) */
/* 686 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 688 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    IELF_HANDLE_rundown
    };


static const unsigned short eventlog_FormatStringOffsetTable[] =
    {
    0,
    48,
    96,
    138,
    180,
    228,
    276,
    330,
    402,
    474,
    540,
    618,
    738,
    786,
    834,
    906,
    978,
    1044,
    1122,
    1242,
    1270,
    1298,
    1326,
    1392,
    1420,
    1546,
    1660
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC eventlog_StubDesc = 
    {
    (void *)& eventlog___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    ms2Deven__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

static const RPC_DISPATCH_FUNCTION eventlog_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE eventlog_v0_0_DispatchTable = 
    {
    27,
    (RPC_DISPATCH_FUNCTION*)eventlog_table
    };

static const SERVER_ROUTINE eventlog_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)ElfrClearELFW,
    (SERVER_ROUTINE)ElfrBackupELFW,
    (SERVER_ROUTINE)ElfrCloseEL,
    (SERVER_ROUTINE)ElfrDeregisterEventSource,
    (SERVER_ROUTINE)ElfrNumberOfRecords,
    (SERVER_ROUTINE)ElfrOldestRecord,
    (SERVER_ROUTINE)ElfrChangeNotify,
    (SERVER_ROUTINE)ElfrOpenELW,
    (SERVER_ROUTINE)ElfrRegisterEventSourceW,
    (SERVER_ROUTINE)ElfrOpenBELW,
    (SERVER_ROUTINE)ElfrReadELW,
    (SERVER_ROUTINE)ElfrReportEventW,
    (SERVER_ROUTINE)ElfrClearELFA,
    (SERVER_ROUTINE)ElfrBackupELFA,
    (SERVER_ROUTINE)ElfrOpenELA,
    (SERVER_ROUTINE)ElfrRegisterEventSourceA,
    (SERVER_ROUTINE)ElfrOpenBELA,
    (SERVER_ROUTINE)ElfrReadELA,
    (SERVER_ROUTINE)ElfrReportEventA,
    (SERVER_ROUTINE)Opnum19NotUsedOnWire,
    (SERVER_ROUTINE)Opnum20NotUsedOnWire,
    (SERVER_ROUTINE)Opnum21NotUsedOnWire,
    (SERVER_ROUTINE)ElfrGetLogInformation,
    (SERVER_ROUTINE)Opnum23NotUsedOnWire,
    (SERVER_ROUTINE)ElfrReportEventAndSourceW,
    (SERVER_ROUTINE)ElfrReportEventExW,
    (SERVER_ROUTINE)ElfrReportEventExA
    };

static const MIDL_SERVER_INFO eventlog_ServerInfo = 
    {
    &eventlog_StubDesc,
    eventlog_ServerRoutineTable,
    ms2Deven__MIDL_ProcFormatString.Format,
    eventlog_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

