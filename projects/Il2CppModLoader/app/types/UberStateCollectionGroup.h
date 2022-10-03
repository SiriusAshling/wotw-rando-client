#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateCollectionGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateCollectionGroup__Class** type_info;
        inline app::UberStateCollectionGroup__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionGroup__Class>(type_info, "Moon", "UberStateCollectionGroup");
        }
        inline app::UberStateCollectionGroup* create() {
            return il2cpp::create_object<app::UberStateCollectionGroup>(get_class());
        }
        inline app::UberStateCollectionGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateCollectionGroup__Array>(get_class(), size);
        }
    } // namespace UberStateCollectionGroup
} // namespace app::classes::types
