#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_FloatValue {
        namespace {
            app::UberShaderAnimatorStrategyExperimental_FloatValue__Class* type_info_ref = nullptr;
        }
        app::UberShaderAnimatorStrategyExperimental_FloatValue__Class** type_info = &type_info_ref;
        inline app::UberShaderAnimatorStrategyExperimental_FloatValue__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_FloatValue__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "FloatValue");
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatValue* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_FloatValue>(get_class());
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatValue__Boxed* box(app::UberShaderAnimatorStrategyExperimental_FloatValue value) {
            return il2cpp::box_value<app::UberShaderAnimatorStrategyExperimental_FloatValue__Boxed>(get_class(), value);
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatValue__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_FloatValue__Array>(get_class(), size);
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatValue__Array* create_array(const std::vector<app::UberShaderAnimatorStrategyExperimental_FloatValue>& items) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_FloatValue__Array>(get_class(), items);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_FloatValue
} // namespace app::classes::types