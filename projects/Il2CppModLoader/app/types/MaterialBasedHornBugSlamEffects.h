#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugSlamEffects {
        namespace {
            app::MaterialBasedHornBugSlamEffects__Class* type_info_ref = nullptr;
        }
        app::MaterialBasedHornBugSlamEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedHornBugSlamEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugSlamEffects__Class>(type_info, "", "MaterialBasedHornBugSlamEffects");
        }
        inline app::MaterialBasedHornBugSlamEffects* create() {
            return il2cpp::create_object<app::MaterialBasedHornBugSlamEffects>(get_class());
        }
        inline app::MaterialBasedHornBugSlamEffects__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialBasedHornBugSlamEffects__Array>(get_class(), size);
        }
        inline app::MaterialBasedHornBugSlamEffects__Array* create_array(const std::vector<app::MaterialBasedHornBugSlamEffects*>& items) {
            return il2cpp::array_new<app::MaterialBasedHornBugSlamEffects__Array>(get_class(), items);
        }
    } // namespace MaterialBasedHornBugSlamEffects
} // namespace app::classes::types