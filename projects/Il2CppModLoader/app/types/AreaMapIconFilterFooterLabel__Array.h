#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconFilterFooterLabel__Array {
        namespace {
            app::AreaMapIconFilterFooterLabel__Array__Class* type_info_ref = nullptr;
        }
        app::AreaMapIconFilterFooterLabel__Array__Class** type_info = &type_info_ref;
        inline app::AreaMapIconFilterFooterLabel__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIconFilterFooterLabel__Array__Class>(type_info, "", "AreaMapIconFilterFooterLabel[]");
        }
        inline app::AreaMapIconFilterFooterLabel__Array* create() {
            return il2cpp::create_object<app::AreaMapIconFilterFooterLabel__Array>(get_class());
        }
    } // namespace AreaMapIconFilterFooterLabel__Array
} // namespace app::classes::types