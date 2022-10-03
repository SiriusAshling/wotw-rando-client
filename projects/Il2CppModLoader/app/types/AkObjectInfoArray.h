#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkObjectInfoArray {
        namespace {
            app::AkObjectInfoArray__Class* type_info_ref = nullptr;
        }
        app::AkObjectInfoArray__Class** type_info = &type_info_ref;
        inline app::AkObjectInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkObjectInfoArray__Class>(type_info, "", "AkObjectInfoArray");
        }
        inline app::AkObjectInfoArray* create() {
            return il2cpp::create_object<app::AkObjectInfoArray>(get_class());
        }
    } // namespace AkObjectInfoArray
} // namespace app::classes::types
