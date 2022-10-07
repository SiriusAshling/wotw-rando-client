#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AlphabetOptions {
        namespace {
            app::AlphabetOptions__Class* type_info_ref = nullptr;
        }
        app::AlphabetOptions__Class** type_info = &type_info_ref;
        inline app::AlphabetOptions__Class* get_class() {
            return il2cpp::get_class<app::AlphabetOptions__Class>(type_info, "", "AlphabetOptions");
        }
        inline app::AlphabetOptions* create() {
            return il2cpp::create_object<app::AlphabetOptions>(get_class());
        }
    } // namespace AlphabetOptions
} // namespace app::classes::types