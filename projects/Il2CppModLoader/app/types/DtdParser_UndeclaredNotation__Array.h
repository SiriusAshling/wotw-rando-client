#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DtdParser_UndeclaredNotation__Array {
        namespace {
            app::DtdParser_UndeclaredNotation__Array__Class* type_info_ref = nullptr;
        }
        app::DtdParser_UndeclaredNotation__Array__Class** type_info = &type_info_ref;
        inline app::DtdParser_UndeclaredNotation__Array__Class* get_class() {
            return il2cpp::get_class<app::DtdParser_UndeclaredNotation__Array__Class>(type_info, "System.Xml", "DtdParser+UndeclaredNotation[]");
        }
        inline app::DtdParser_UndeclaredNotation__Array* create() {
            return il2cpp::create_object<app::DtdParser_UndeclaredNotation__Array>(get_class());
        }
    } // namespace DtdParser_UndeclaredNotation__Array
} // namespace app::classes::types