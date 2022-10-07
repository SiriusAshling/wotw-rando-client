#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonEffectComposition__Array {
        namespace {
            app::IMoonEffectComposition__Array__Class* type_info_ref = nullptr;
        }
        app::IMoonEffectComposition__Array__Class** type_info = &type_info_ref;
        inline app::IMoonEffectComposition__Array__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectComposition__Array__Class>(type_info, "Moon.EffectsFramework", "IMoonEffectComposition[]");
        }
        inline app::IMoonEffectComposition__Array* create() {
            return il2cpp::create_object<app::IMoonEffectComposition__Array>(get_class());
        }
    } // namespace IMoonEffectComposition__Array
} // namespace app::classes::types