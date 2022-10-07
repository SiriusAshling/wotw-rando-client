#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SByteArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SByteArrayTypeInfo__Class** type_info;
        inline app::SByteArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SByteArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "SByteArrayTypeInfo");
        }
        inline app::SByteArrayTypeInfo* create() {
            return il2cpp::create_object<app::SByteArrayTypeInfo>(get_class());
        }
    } // namespace SByteArrayTypeInfo
} // namespace app::classes::types