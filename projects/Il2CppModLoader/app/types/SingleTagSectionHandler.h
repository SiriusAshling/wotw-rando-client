#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SingleTagSectionHandler {
        namespace {
            app::SingleTagSectionHandler__Class* type_info_ref = nullptr;
        }
        app::SingleTagSectionHandler__Class** type_info = &type_info_ref;
        inline app::SingleTagSectionHandler__Class* get_class() {
            return il2cpp::get_class<app::SingleTagSectionHandler__Class>(type_info, "System.Configuration", "SingleTagSectionHandler");
        }
        inline app::SingleTagSectionHandler* create() {
            return il2cpp::create_object<app::SingleTagSectionHandler>(get_class());
        }
    } // namespace SingleTagSectionHandler
} // namespace app::classes::types
