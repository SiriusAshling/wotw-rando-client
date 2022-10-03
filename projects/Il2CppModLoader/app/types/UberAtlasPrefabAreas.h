#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberAtlasPrefabAreas {
        namespace {
            app::UberAtlasPrefabAreas__Class* type_info_ref = nullptr;
        }
        app::UberAtlasPrefabAreas__Class** type_info = &type_info_ref;
        inline app::UberAtlasPrefabAreas__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasPrefabAreas__Class>(type_info, "", "UberAtlasPrefabAreas");
        }
        inline app::UberAtlasPrefabAreas* create() {
            return il2cpp::create_object<app::UberAtlasPrefabAreas>(get_class());
        }
    } // namespace UberAtlasPrefabAreas
} // namespace app::classes::types
