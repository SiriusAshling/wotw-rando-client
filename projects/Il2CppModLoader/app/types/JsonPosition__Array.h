#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonPosition__Array {
        namespace {
            app::JsonPosition__Array__Class* type_info_ref = nullptr;
        }
        app::JsonPosition__Array__Class** type_info = &type_info_ref;
        inline app::JsonPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonPosition__Array__Class>(type_info, "Newtonsoft.Json", "JsonPosition[]");
        }
        inline app::JsonPosition__Array* create() {
            return il2cpp::create_object<app::JsonPosition__Array>(get_class());
        }
    } // namespace JsonPosition__Array
} // namespace app::classes::types
