#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballSpotOriBehaviour {
        namespace {
            app::GasballSpotOriBehaviour__Class* type_info_ref = nullptr;
        }
        app::GasballSpotOriBehaviour__Class** type_info = &type_info_ref;
        inline app::GasballSpotOriBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GasballSpotOriBehaviour__Class>(type_info, "", "GasballSpotOriBehaviour");
        }
        inline app::GasballSpotOriBehaviour* create() {
            return il2cpp::create_object<app::GasballSpotOriBehaviour>(get_class());
        }
    } // namespace GasballSpotOriBehaviour
} // namespace app::classes::types
