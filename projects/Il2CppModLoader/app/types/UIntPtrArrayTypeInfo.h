#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIntPtrArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UIntPtrArrayTypeInfo__Class** type_info;
        inline app::UIntPtrArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UIntPtrArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UIntPtrArrayTypeInfo");
        }
        inline app::UIntPtrArrayTypeInfo* create() {
            return il2cpp::create_object<app::UIntPtrArrayTypeInfo>(get_class());
        }
    } // namespace UIntPtrArrayTypeInfo
} // namespace app::classes::types