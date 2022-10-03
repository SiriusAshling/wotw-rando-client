#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInterestPoint {
        namespace {
            app::DynamicInterestPoint__Class* type_info_ref = nullptr;
        }
        app::DynamicInterestPoint__Class** type_info = &type_info_ref;
        inline app::DynamicInterestPoint__Class* get_class() {
            return il2cpp::get_class<app::DynamicInterestPoint__Class>(type_info, "", "DynamicInterestPoint");
        }
        inline app::DynamicInterestPoint* create() {
            return il2cpp::create_object<app::DynamicInterestPoint>(get_class());
        }
    } // namespace DynamicInterestPoint
} // namespace app::classes::types
