#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplaySoundParameterMap {
        namespace {
            app::GameplaySoundParameterMap__Class* type_info_ref = nullptr;
        }
        app::GameplaySoundParameterMap__Class** type_info = &type_info_ref;
        inline app::GameplaySoundParameterMap__Class* get_class() {
            return il2cpp::get_class<app::GameplaySoundParameterMap__Class>(type_info, "", "GameplaySoundParameterMap");
        }
        inline app::GameplaySoundParameterMap* create() {
            return il2cpp::create_object<app::GameplaySoundParameterMap>(get_class());
        }
    } // namespace GameplaySoundParameterMap
} // namespace app::classes::types
