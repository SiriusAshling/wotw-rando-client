#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrainEntityTester {
        namespace {
            app::BrainEntityTester__Class* type_info_ref = nullptr;
        }
        app::BrainEntityTester__Class** type_info = &type_info_ref;
        inline app::BrainEntityTester__Class* get_class() {
            return il2cpp::get_class<app::BrainEntityTester__Class>(type_info, "", "BrainEntityTester");
        }
        inline app::BrainEntityTester* create() {
            return il2cpp::create_object<app::BrainEntityTester>(get_class());
        }
    } // namespace BrainEntityTester
} // namespace app::classes::types
