#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringConcat {
        namespace {
            app::StringConcat__Class* type_info_ref = nullptr;
        }
        app::StringConcat__Class** type_info = &type_info_ref;
        inline app::StringConcat__Class* get_class() {
            return il2cpp::get_class<app::StringConcat__Class>(type_info, "System.Xml.Xsl.Runtime", "StringConcat");
        }
        inline app::StringConcat* create() {
            return il2cpp::create_object<app::StringConcat>(get_class());
        }
        inline app::StringConcat__Boxed* box(app::StringConcat value) {
            return il2cpp::box_value<app::StringConcat__Boxed>(get_class(), value);
        }
    } // namespace StringConcat
} // namespace app::classes::types
