/*** Autogenerated by WIDL 9.8 from include/windows.graphics.capture.interop.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __windows_graphics_capture_interop_h__
#define __windows_graphics_capture_interop_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IGraphicsCaptureItemInterop_FWD_DEFINED__
#define __IGraphicsCaptureItemInterop_FWD_DEFINED__
typedef interface IGraphicsCaptureItemInterop IGraphicsCaptureItemInterop;
#ifdef __cplusplus
namespace ABI {
    interface IGraphicsCaptureItemInterop;
}
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <windows.ui.composition.h>
#include <windows.graphics.capture.h>
#include <sdkddkver.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IGraphicsCaptureItemInterop interface
 */
#ifndef __IGraphicsCaptureItemInterop_INTERFACE_DEFINED__
#define __IGraphicsCaptureItemInterop_INTERFACE_DEFINED__

DEFINE_GUID(IID_IGraphicsCaptureItemInterop, 0x3628e81b, 0x3cac, 0x4c60, 0xb7,0xf4, 0x23,0xce,0x0e,0x0c,0x33,0x56);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3628e81b-3cac-4c60-b7f4-23ce0e0c3356")
IGraphicsCaptureItemInterop : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateForWindow(
        HWND window,
        REFIID iid,
        void **result) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateForMonitor(
        HMONITOR monitor,
        REFIID iid,
        void **result) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IGraphicsCaptureItemInterop, 0x3628e81b, 0x3cac, 0x4c60, 0xb7,0xf4, 0x23,0xce,0x0e,0x0c,0x33,0x56)
#endif
#else
typedef struct IGraphicsCaptureItemInteropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGraphicsCaptureItemInterop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGraphicsCaptureItemInterop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGraphicsCaptureItemInterop *This);

    /*** IGraphicsCaptureItemInterop methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateForWindow)(
        IGraphicsCaptureItemInterop *This,
        HWND window,
        REFIID iid,
        void **result);

    HRESULT (STDMETHODCALLTYPE *CreateForMonitor)(
        IGraphicsCaptureItemInterop *This,
        HMONITOR monitor,
        REFIID iid,
        void **result);

    END_INTERFACE
} IGraphicsCaptureItemInteropVtbl;

interface IGraphicsCaptureItemInterop {
    CONST_VTBL IGraphicsCaptureItemInteropVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IGraphicsCaptureItemInterop_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IGraphicsCaptureItemInterop_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IGraphicsCaptureItemInterop_Release(This) (This)->lpVtbl->Release(This)
/*** IGraphicsCaptureItemInterop methods ***/
#define IGraphicsCaptureItemInterop_CreateForWindow(This,window,iid,result) (This)->lpVtbl->CreateForWindow(This,window,iid,result)
#define IGraphicsCaptureItemInterop_CreateForMonitor(This,monitor,iid,result) (This)->lpVtbl->CreateForMonitor(This,monitor,iid,result)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IGraphicsCaptureItemInterop_QueryInterface(IGraphicsCaptureItemInterop* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IGraphicsCaptureItemInterop_AddRef(IGraphicsCaptureItemInterop* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IGraphicsCaptureItemInterop_Release(IGraphicsCaptureItemInterop* This) {
    return This->lpVtbl->Release(This);
}
/*** IGraphicsCaptureItemInterop methods ***/
static __WIDL_INLINE HRESULT IGraphicsCaptureItemInterop_CreateForWindow(IGraphicsCaptureItemInterop* This,HWND window,REFIID iid,void **result) {
    return This->lpVtbl->CreateForWindow(This,window,iid,result);
}
static __WIDL_INLINE HRESULT IGraphicsCaptureItemInterop_CreateForMonitor(IGraphicsCaptureItemInterop* This,HMONITOR monitor,REFIID iid,void **result) {
    return This->lpVtbl->CreateForMonitor(This,monitor,iid,result);
}
#endif
#endif

#endif

#endif  /* __IGraphicsCaptureItemInterop_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);
ULONG           __RPC_USER HMONITOR_UserSize     (ULONG *, ULONG, HMONITOR *);
unsigned char * __RPC_USER HMONITOR_UserMarshal  (ULONG *, unsigned char *, HMONITOR *);
unsigned char * __RPC_USER HMONITOR_UserUnmarshal(ULONG *, unsigned char *, HMONITOR *);
void            __RPC_USER HMONITOR_UserFree     (ULONG *, HMONITOR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_graphics_capture_interop_h__ */
