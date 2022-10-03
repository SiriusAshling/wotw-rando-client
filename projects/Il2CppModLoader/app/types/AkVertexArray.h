#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkVertexArray {
        namespace {
            app::AkVertexArray__Class* type_info_ref = nullptr;
        }
        app::AkVertexArray__Class** type_info = &type_info_ref;
        inline app::AkVertexArray__Class* get_class() {
            return il2cpp::get_class<app::AkVertexArray__Class>(type_info, "", "AkVertexArray");
        }
        inline app::AkVertexArray* create() {
            return il2cpp::create_object<app::AkVertexArray>(get_class());
        }
    } // namespace AkVertexArray
} // namespace app::classes::types
