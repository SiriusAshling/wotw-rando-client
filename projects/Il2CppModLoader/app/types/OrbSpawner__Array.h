#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrbSpawner__Array {
        namespace {
            app::OrbSpawner__Array__Class* type_info_ref = nullptr;
        }
        app::OrbSpawner__Array__Class** type_info = &type_info_ref;
        inline app::OrbSpawner__Array__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawner__Array__Class>(type_info, "", "OrbSpawner[]");
        }
        inline app::OrbSpawner__Array* create() {
            return il2cpp::create_object<app::OrbSpawner__Array>(get_class());
        }
    } // namespace OrbSpawner__Array
} // namespace app::classes::types
