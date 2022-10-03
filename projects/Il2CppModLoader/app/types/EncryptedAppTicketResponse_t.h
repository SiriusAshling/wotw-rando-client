#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncryptedAppTicketResponse_t {
        namespace {
            app::EncryptedAppTicketResponse_t__Class* type_info_ref = nullptr;
        }
        app::EncryptedAppTicketResponse_t__Class** type_info = &type_info_ref;
        inline app::EncryptedAppTicketResponse_t__Class* get_class() {
            return il2cpp::get_class<app::EncryptedAppTicketResponse_t__Class>(type_info, "Steamworks", "EncryptedAppTicketResponse_t");
        }
        inline app::EncryptedAppTicketResponse_t* create() {
            return il2cpp::create_object<app::EncryptedAppTicketResponse_t>(get_class());
        }
        inline app::EncryptedAppTicketResponse_t__Boxed* box(app::EncryptedAppTicketResponse_t value) {
            return il2cpp::box_value<app::EncryptedAppTicketResponse_t__Boxed>(get_class(), value);
        }
    } // namespace EncryptedAppTicketResponse_t
} // namespace app::classes::types
