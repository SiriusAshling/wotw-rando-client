#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrolEntity {
        namespace {
            app::GrolEntity__Class* type_info_ref = nullptr;
        }
        app::GrolEntity__Class** type_info = &type_info_ref;
        inline app::GrolEntity__Class* get_class() {
            return il2cpp::get_class<app::GrolEntity__Class>(type_info, "", "GrolEntity");
        }
        inline app::GrolEntity* create() {
            return il2cpp::create_object<app::GrolEntity>(get_class());
        }
    } // namespace GrolEntity
} // namespace app::classes::types