#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrBuildFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_XdrBuildFunction__Class** type_info;
        inline app::XdrBuilder_XdrBuildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrBuildFunction__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "XdrBuildFunction");
        }
        inline app::XdrBuilder_XdrBuildFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrBuildFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrBuildFunction
} // namespace app::classes::types
