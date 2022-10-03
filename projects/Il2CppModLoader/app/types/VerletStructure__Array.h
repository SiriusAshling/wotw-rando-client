#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure__Array {
        namespace {
            app::VerletStructure__Array__Class* type_info_ref = nullptr;
        }
        app::VerletStructure__Array__Class** type_info = &type_info_ref;
        inline app::VerletStructure__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure__Array__Class>(type_info, "", "VerletStructure[]");
        }
        inline app::VerletStructure__Array* create() {
            return il2cpp::create_object<app::VerletStructure__Array>(get_class());
        }
    } // namespace VerletStructure__Array
} // namespace app::classes::types
