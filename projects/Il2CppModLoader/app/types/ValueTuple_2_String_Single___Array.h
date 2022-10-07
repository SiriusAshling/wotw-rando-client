#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueTuple_2_String_Single___Array {
        namespace {
            app::ValueTuple_2_String_Single___Array__Class* type_info_ref = nullptr;
        }
        app::ValueTuple_2_String_Single___Array__Class** type_info = &type_info_ref;
        inline app::ValueTuple_2_String_Single___Array__Class* get_class() {
            return il2cpp::get_class<app::ValueTuple_2_String_Single___Array__Class>(type_info, "System", "ValueTuple`2[String,Single][]");
        }
        inline app::ValueTuple_2_String_Single___Array* create() {
            return il2cpp::create_object<app::ValueTuple_2_String_Single___Array>(get_class());
        }
    } // namespace ValueTuple_2_String_Single___Array
} // namespace app::classes::types