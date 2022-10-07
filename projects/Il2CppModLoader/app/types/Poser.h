#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Poser {
        namespace {
            app::Poser__Class* type_info_ref = nullptr;
        }
        app::Poser__Class** type_info = &type_info_ref;
        inline app::Poser__Class* get_class() {
            return il2cpp::get_class<app::Poser__Class>(type_info, "RootMotion.FinalIK", "Poser");
        }
        inline app::Poser* create() {
            return il2cpp::create_object<app::Poser>(get_class());
        }
    } // namespace Poser
} // namespace app::classes::types