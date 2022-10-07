#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaNotation__Array {
        namespace {
            app::SchemaNotation__Array__Class* type_info_ref = nullptr;
        }
        app::SchemaNotation__Array__Class** type_info = &type_info_ref;
        inline app::SchemaNotation__Array__Class* get_class() {
            return il2cpp::get_class<app::SchemaNotation__Array__Class>(type_info, "System.Xml.Schema", "SchemaNotation[]");
        }
        inline app::SchemaNotation__Array* create() {
            return il2cpp::create_object<app::SchemaNotation__Array>(get_class());
        }
    } // namespace SchemaNotation__Array
} // namespace app::classes::types