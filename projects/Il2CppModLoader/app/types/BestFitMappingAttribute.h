#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BestFitMappingAttribute {
        namespace {
            app::BestFitMappingAttribute__Class* type_info_ref = nullptr;
        }
        app::BestFitMappingAttribute__Class** type_info = &type_info_ref;
        inline app::BestFitMappingAttribute__Class* get_class() {
            return il2cpp::get_class<app::BestFitMappingAttribute__Class>(type_info, "System.Runtime.InteropServices", "BestFitMappingAttribute");
        }
        inline app::BestFitMappingAttribute* create() {
            return il2cpp::create_object<app::BestFitMappingAttribute>(get_class());
        }
    } // namespace BestFitMappingAttribute
} // namespace app::classes::types