#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Trail_TrailPosition__Array {
        namespace {
            app::Trail_TrailPosition__Array__Class* type_info_ref = nullptr;
        }
        app::Trail_TrailPosition__Array__Class** type_info = &type_info_ref;
        inline app::Trail_TrailPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::Trail_TrailPosition__Array__Class>(type_info, "", "Trail+TrailPosition[]");
        }
        inline app::Trail_TrailPosition__Array* create() {
            return il2cpp::create_object<app::Trail_TrailPosition__Array>(get_class());
        }
    } // namespace Trail_TrailPosition__Array
} // namespace app::classes::types