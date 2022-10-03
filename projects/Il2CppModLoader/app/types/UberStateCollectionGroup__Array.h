#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateCollectionGroup__Array {
        namespace {
            app::UberStateCollectionGroup__Array__Class* type_info_ref = nullptr;
        }
        app::UberStateCollectionGroup__Array__Class** type_info = &type_info_ref;
        inline app::UberStateCollectionGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionGroup__Array__Class>(type_info, "Moon", "UberStateCollectionGroup[]");
        }
        inline app::UberStateCollectionGroup__Array* create() {
            return il2cpp::create_object<app::UberStateCollectionGroup__Array>(get_class());
        }
    } // namespace UberStateCollectionGroup__Array
} // namespace app::classes::types
