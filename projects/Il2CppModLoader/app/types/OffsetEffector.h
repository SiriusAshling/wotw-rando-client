#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffsetEffector {
        namespace {
            app::OffsetEffector__Class* type_info_ref = nullptr;
        }
        app::OffsetEffector__Class** type_info = &type_info_ref;
        inline app::OffsetEffector__Class* get_class() {
            return il2cpp::get_class<app::OffsetEffector__Class>(type_info, "RootMotion.Demos", "OffsetEffector");
        }
        inline app::OffsetEffector* create() {
            return il2cpp::create_object<app::OffsetEffector>(get_class());
        }
    } // namespace OffsetEffector
} // namespace app::classes::types
