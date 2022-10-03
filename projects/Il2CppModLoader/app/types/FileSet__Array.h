#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileSet__Array {
        namespace {
            app::FileSet__Array__Class* type_info_ref = nullptr;
        }
        app::FileSet__Array__Class** type_info = &type_info_ref;
        inline app::FileSet__Array__Class* get_class() {
            return il2cpp::get_class<app::FileSet__Array__Class>(type_info, "PlayFab.PlayStreamModels", "FileSet[]");
        }
        inline app::FileSet__Array* create() {
            return il2cpp::create_object<app::FileSet__Array>(get_class());
        }
    } // namespace FileSet__Array
} // namespace app::classes::types
