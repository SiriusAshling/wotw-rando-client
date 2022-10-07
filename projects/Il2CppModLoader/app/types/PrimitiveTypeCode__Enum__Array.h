#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrimitiveTypeCode__Enum__Array {
        namespace {
            app::PrimitiveTypeCode__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::PrimitiveTypeCode__Enum__Array__Class** type_info = &type_info_ref;
        inline app::PrimitiveTypeCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveTypeCode__Enum__Array__Class>(type_info, "Newtonsoft.Json.Utilities", "PrimitiveTypeCode[]");
        }
        inline app::PrimitiveTypeCode__Enum__Array* create() {
            return il2cpp::create_object<app::PrimitiveTypeCode__Enum__Array>(get_class());
        }
    } // namespace PrimitiveTypeCode__Enum__Array
} // namespace app::classes::types