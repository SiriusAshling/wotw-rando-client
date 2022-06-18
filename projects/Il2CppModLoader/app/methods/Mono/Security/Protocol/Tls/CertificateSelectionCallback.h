#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::CertificateSelectionCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CertificateSelectionCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01BD0F10, app::X509Certificate_1 *, Invoke, (app::CertificateSelectionCallback * this_ptr, app::X509CertificateCollection_1 * client_certificates, app::X509Certificate_1 * server_certificate, app::String * target_host, app::X509CertificateCollection_1 * server_requested_certificates))
    IL2CPP_REGISTER_METHOD(0x01BD1540, app::IAsyncResult *, BeginInvoke, (app::CertificateSelectionCallback * this_ptr, app::X509CertificateCollection_1 * client_certificates, app::X509Certificate_1 * server_certificate, app::String * target_host, app::X509CertificateCollection_1 * server_requested_certificates, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::X509Certificate_1 *, EndInvoke, (app::CertificateSelectionCallback * this_ptr, app::IAsyncResult * result))
}