#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JobThreadConfigurator_SaveIOThreadingMode__Enum {
        namespace {
            app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class* type_info_ref = nullptr;
        }
        app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class** type_info = &type_info_ref;
        inline app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JobThreadConfigurator_SaveIOThreadingMode__Enum__Class>(type_info, "Moon.debugMenu.scripts.gameSpecific.menuItems", "JobThreadConfigurator", "SaveIOThreadingMode");
        }
        inline app::JobThreadConfigurator_SaveIOThreadingMode__Enum* create() {
            return il2cpp::create_object<app::JobThreadConfigurator_SaveIOThreadingMode__Enum>(get_class());
        }
    } // namespace JobThreadConfigurator_SaveIOThreadingMode__Enum
} // namespace app::classes::types