#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsChinaRegionCondition {
        namespace {
            app::IsChinaRegionCondition__Class* type_info_ref = nullptr;
        }
        app::IsChinaRegionCondition__Class** type_info = &type_info_ref;
        inline app::IsChinaRegionCondition__Class* get_class() {
            return il2cpp::get_class<app::IsChinaRegionCondition__Class>(type_info, "", "IsChinaRegionCondition");
        }
        inline app::IsChinaRegionCondition* create() {
            return il2cpp::create_object<app::IsChinaRegionCondition>(get_class());
        }
    } // namespace IsChinaRegionCondition
} // namespace app::classes::types