#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreserveReferencesHandling__Enum {
        namespace {
            app::PreserveReferencesHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::PreserveReferencesHandling__Enum__Class** type_info = &type_info_ref;
        inline app::PreserveReferencesHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::PreserveReferencesHandling__Enum__Class>(type_info, "Newtonsoft.Json", "PreserveReferencesHandling");
        }
        inline app::PreserveReferencesHandling__Enum* create() {
            return il2cpp::create_object<app::PreserveReferencesHandling__Enum>(get_class());
        }
    } // namespace PreserveReferencesHandling__Enum
} // namespace app::classes::types