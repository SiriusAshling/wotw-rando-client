#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectReference__Array {
        namespace {
            app::ObjectReference__Array__Class* type_info_ref = nullptr;
        }
        app::ObjectReference__Array__Class** type_info = &type_info_ref;
        inline app::ObjectReference__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectReference__Array__Class>(type_info, "", "ObjectReference[]");
        }
        inline app::ObjectReference__Array* create() {
            return il2cpp::create_object<app::ObjectReference__Array>(get_class());
        }
    } // namespace ObjectReference__Array
} // namespace app::classes::types