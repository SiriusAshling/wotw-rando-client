#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnitySerializationHolder {
        namespace {
            app::UnitySerializationHolder__Class* type_info_ref = nullptr;
        }
        app::UnitySerializationHolder__Class** type_info = &type_info_ref;
        inline app::UnitySerializationHolder__Class* get_class() {
            return il2cpp::get_class<app::UnitySerializationHolder__Class>(type_info, "System", "UnitySerializationHolder");
        }
        inline app::UnitySerializationHolder* create() {
            return il2cpp::create_object<app::UnitySerializationHolder>(get_class());
        }
    } // namespace UnitySerializationHolder
} // namespace app::classes::types