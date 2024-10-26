/*** Autogenerated by WIDL 9.8 from include/inputpaneinterop.idl - Do not edit ***/

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

#ifndef __inputpaneinterop_h__
#define __inputpaneinterop_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IInputPaneInterop_FWD_DEFINED__
#define __IInputPaneInterop_FWD_DEFINED__
typedef interface IInputPaneInterop IInputPaneInterop;
#ifdef __cplusplus
interface IInputPaneInterop;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>
#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * IInputPaneInterop interface
 */
#ifndef __IInputPaneInterop_INTERFACE_DEFINED__
#define __IInputPaneInterop_INTERFACE_DEFINED__

DEFINE_GUID(IID_IInputPaneInterop, 0x75cf2c57, 0x9195, 0x4931, 0x83,0x32, 0xf0,0xb4,0x09,0xe9,0x16,0xaf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("75cf2c57-9195-4931-8332-f0b409e916af")
IInputPaneInterop : public IInspectable
{
    virtual HRESULT STDMETHODCALLTYPE GetForWindow(
        HWND app_window,
        REFIID riid,
        void **input_pane) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IInputPaneInterop, 0x75cf2c57, 0x9195, 0x4931, 0x83,0x32, 0xf0,0xb4,0x09,0xe9,0x16,0xaf)
#endif
#else
typedef struct IInputPaneInteropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInputPaneInterop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInputPaneInterop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInputPaneInterop *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        IInputPaneInterop *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        IInputPaneInterop *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        IInputPaneInterop *This,
        TrustLevel *trustLevel);

    /*** IInputPaneInterop methods ***/
    HRESULT (STDMETHODCALLTYPE *GetForWindow)(
        IInputPaneInterop *This,
        HWND app_window,
        REFIID riid,
        void **input_pane);

    END_INTERFACE
} IInputPaneInteropVtbl;

interface IInputPaneInterop {
    CONST_VTBL IInputPaneInteropVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IInputPaneInterop_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IInputPaneInterop_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IInputPaneInterop_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define IInputPaneInterop_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define IInputPaneInterop_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define IInputPaneInterop_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IInputPaneInterop methods ***/
#define IInputPaneInterop_GetForWindow(This,app_window,riid,input_pane) (This)->lpVtbl->GetForWindow(This,app_window,riid,input_pane)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IInputPaneInterop_QueryInterface(IInputPaneInterop* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IInputPaneInterop_AddRef(IInputPaneInterop* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IInputPaneInterop_Release(IInputPaneInterop* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static __WIDL_INLINE HRESULT IInputPaneInterop_GetIids(IInputPaneInterop* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static __WIDL_INLINE HRESULT IInputPaneInterop_GetRuntimeClassName(IInputPaneInterop* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static __WIDL_INLINE HRESULT IInputPaneInterop_GetTrustLevel(IInputPaneInterop* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IInputPaneInterop methods ***/
static __WIDL_INLINE HRESULT IInputPaneInterop_GetForWindow(IInputPaneInterop* This,HWND app_window,REFIID riid,void **input_pane) {
    return This->lpVtbl->GetForWindow(This,app_window,riid,input_pane);
}
#endif
#endif

#endif


#endif  /* __IInputPaneInterop_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS1) */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __inputpaneinterop_h__ */
