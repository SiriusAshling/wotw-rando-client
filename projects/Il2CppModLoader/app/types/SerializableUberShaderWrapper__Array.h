#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializableUberShaderWrapper__Array {
        namespace {
            app::SerializableUberShaderWrapper__Array__Class* type_info_ref = nullptr;
        }
        app::SerializableUberShaderWrapper__Array__Class** type_info = &type_info_ref;
        inline app::SerializableUberShaderWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberShaderWrapper__Array__Class>(type_info, "Moon.ArtOptimization", "SerializableUberShaderWrapper[]");
        }
        inline app::SerializableUberShaderWrapper__Array* create() {
            return il2cpp::create_object<app::SerializableUberShaderWrapper__Array>(get_class());
        }
    } // namespace SerializableUberShaderWrapper__Array
} // namespace app::classes::types
