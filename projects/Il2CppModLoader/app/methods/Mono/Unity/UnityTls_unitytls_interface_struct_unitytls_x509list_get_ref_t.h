#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02187780, app::UnityTls_unitytls_x509list_ref, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * this_ptr, app::UnityTls_unitytls_x509list * list, app::UnityTls_unitytls_errorstate * error_state))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * this_ptr, app::UnityTls_unitytls_x509list * list, app::UnityTls_unitytls_errorstate * error_state, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::UnityTls_unitytls_x509list_ref, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t * this_ptr, app::IAsyncResult * result))
}