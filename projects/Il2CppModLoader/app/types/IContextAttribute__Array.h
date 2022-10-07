#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContextAttribute__Array {
        namespace {
            app::IContextAttribute__Array__Class* type_info_ref = nullptr;
        }
        app::IContextAttribute__Array__Class** type_info = &type_info_ref;
        inline app::IContextAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::IContextAttribute__Array__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContextAttribute[]");
        }
        inline app::IContextAttribute__Array* create() {
            return il2cpp::create_object<app::IContextAttribute__Array>(get_class());
        }
    } // namespace IContextAttribute__Array
} // namespace app::classes::types