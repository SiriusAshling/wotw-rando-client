#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChannelBindingKind__Enum {
        namespace {
            app::ChannelBindingKind__Enum__Class* type_info_ref = nullptr;
        }
        app::ChannelBindingKind__Enum__Class** type_info = &type_info_ref;
        inline app::ChannelBindingKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::ChannelBindingKind__Enum__Class>(type_info, "System.Security.Authentication.ExtendedProtection", "ChannelBindingKind");
        }
        inline app::ChannelBindingKind__Enum* create() {
            return il2cpp::create_object<app::ChannelBindingKind__Enum>(get_class());
        }
    } // namespace ChannelBindingKind__Enum
} // namespace app::classes::types