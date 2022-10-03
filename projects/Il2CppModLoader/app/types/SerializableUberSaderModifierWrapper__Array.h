#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializableUberSaderModifierWrapper__Array {
        namespace {
            app::SerializableUberSaderModifierWrapper__Array__Class* type_info_ref = nullptr;
        }
        app::SerializableUberSaderModifierWrapper__Array__Class** type_info = &type_info_ref;
        inline app::SerializableUberSaderModifierWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberSaderModifierWrapper__Array__Class>(type_info, "Moon.ArtOptimization", "SerializableUberSaderModifierWrapper[]");
        }
        inline app::SerializableUberSaderModifierWrapper__Array* create() {
            return il2cpp::create_object<app::SerializableUberSaderModifierWrapper__Array>(get_class());
        }
    } // namespace SerializableUberSaderModifierWrapper__Array
} // namespace app::classes::types
