#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadingFinishedCondition {
        namespace {
            app::LoadingFinishedCondition__Class* type_info_ref = nullptr;
        }
        app::LoadingFinishedCondition__Class** type_info = &type_info_ref;
        inline app::LoadingFinishedCondition__Class* get_class() {
            return il2cpp::get_class<app::LoadingFinishedCondition__Class>(type_info, "", "LoadingFinishedCondition");
        }
        inline app::LoadingFinishedCondition* create() {
            return il2cpp::create_object<app::LoadingFinishedCondition>(get_class());
        }
    } // namespace LoadingFinishedCondition
} // namespace app::classes::types