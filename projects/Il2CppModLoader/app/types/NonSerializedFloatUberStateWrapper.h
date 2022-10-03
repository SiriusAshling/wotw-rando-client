#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NonSerializedFloatUberStateWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NonSerializedFloatUberStateWrapper__Class** type_info;
        inline app::NonSerializedFloatUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedFloatUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "NonSerializedFloatUberStateWrapper");
        }
        inline app::NonSerializedFloatUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedFloatUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedFloatUberStateWrapper
} // namespace app::classes::types
