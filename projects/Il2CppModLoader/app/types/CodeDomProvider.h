#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CodeDomProvider {
        namespace {
            app::CodeDomProvider__Class* type_info_ref = nullptr;
        }
        app::CodeDomProvider__Class** type_info = &type_info_ref;
        inline app::CodeDomProvider__Class* get_class() {
            return il2cpp::get_class<app::CodeDomProvider__Class>(type_info, "Microsoft.CSharp", "CodeDomProvider");
        }
        inline app::CodeDomProvider* create() {
            return il2cpp::create_object<app::CodeDomProvider>(get_class());
        }
    } // namespace CodeDomProvider
} // namespace app::classes::types