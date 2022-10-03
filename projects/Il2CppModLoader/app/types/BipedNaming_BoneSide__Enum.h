#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BipedNaming_BoneSide__Enum {
        namespace {
            app::BipedNaming_BoneSide__Enum__Class* type_info_ref = nullptr;
        }
        app::BipedNaming_BoneSide__Enum__Class** type_info = &type_info_ref;
        inline app::BipedNaming_BoneSide__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BipedNaming_BoneSide__Enum__Class>(type_info, "RootMotion", "BipedNaming", "BoneSide");
        }
        inline app::BipedNaming_BoneSide__Enum* create() {
            return il2cpp::create_object<app::BipedNaming_BoneSide__Enum>(get_class());
        }
    } // namespace BipedNaming_BoneSide__Enum
} // namespace app::classes::types
