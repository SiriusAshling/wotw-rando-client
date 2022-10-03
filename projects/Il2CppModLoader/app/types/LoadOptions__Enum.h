#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadOptions__Enum {
        namespace {
            app::LoadOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::LoadOptions__Enum__Class** type_info = &type_info_ref;
        inline app::LoadOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::LoadOptions__Enum__Class>(type_info, "System.Xml.Linq", "LoadOptions");
        }
        inline app::LoadOptions__Enum* create() {
            return il2cpp::create_object<app::LoadOptions__Enum>(get_class());
        }
    } // namespace LoadOptions__Enum
} // namespace app::classes::types
