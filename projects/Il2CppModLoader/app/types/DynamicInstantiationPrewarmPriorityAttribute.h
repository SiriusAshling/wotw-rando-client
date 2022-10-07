#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationPrewarmPriorityAttribute {
        namespace {
            app::DynamicInstantiationPrewarmPriorityAttribute__Class* type_info_ref = nullptr;
        }
        app::DynamicInstantiationPrewarmPriorityAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationPrewarmPriorityAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationPrewarmPriorityAttribute__Class>(type_info, "", "DynamicInstantiationPrewarmPriorityAttribute");
        }
        inline app::DynamicInstantiationPrewarmPriorityAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationPrewarmPriorityAttribute>(get_class());
        }
    } // namespace DynamicInstantiationPrewarmPriorityAttribute
} // namespace app::classes::types