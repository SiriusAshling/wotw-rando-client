#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabSimpleJson_TokenType__Enum {
        namespace {
            app::PlayFabSimpleJson_TokenType__Enum__Class* type_info_ref = nullptr;
        }
        app::PlayFabSimpleJson_TokenType__Enum__Class** type_info = &type_info_ref;
        inline app::PlayFabSimpleJson_TokenType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabSimpleJson_TokenType__Enum__Class>(type_info, "PlayFab.Json", "PlayFabSimpleJson", "TokenType");
        }
        inline app::PlayFabSimpleJson_TokenType__Enum* create() {
            return il2cpp::create_object<app::PlayFabSimpleJson_TokenType__Enum>(get_class());
        }
    } // namespace PlayFabSimpleJson_TokenType__Enum
} // namespace app::classes::types
