#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesignerSerializerAttribute {
        namespace {
            app::DesignerSerializerAttribute__Class* type_info_ref = nullptr;
        }
        app::DesignerSerializerAttribute__Class** type_info = &type_info_ref;
        inline app::DesignerSerializerAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerSerializerAttribute__Class>(type_info, "System.ComponentModel.Design.Serialization", "DesignerSerializerAttribute");
        }
        inline app::DesignerSerializerAttribute* create() {
            return il2cpp::create_object<app::DesignerSerializerAttribute>(get_class());
        }
    } // namespace DesignerSerializerAttribute
} // namespace app::classes::types
