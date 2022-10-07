#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationProviderAttribute {
        namespace {
            app::DynamicInstantiationProviderAttribute__Class* type_info_ref = nullptr;
        }
        app::DynamicInstantiationProviderAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationProviderAttribute__Class>(type_info, "", "DynamicInstantiationProviderAttribute");
        }
        inline app::DynamicInstantiationProviderAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationProviderAttribute>(get_class());
        }
    } // namespace DynamicInstantiationProviderAttribute
} // namespace app::classes::types