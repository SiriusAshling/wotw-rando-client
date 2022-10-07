#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPrewarmOperation__Array {
        namespace {
            app::IPrewarmOperation__Array__Class* type_info_ref = nullptr;
        }
        app::IPrewarmOperation__Array__Class** type_info = &type_info_ref;
        inline app::IPrewarmOperation__Array__Class* get_class() {
            return il2cpp::get_class<app::IPrewarmOperation__Array__Class>(type_info, "frameworks.loading.Prewarmers", "IPrewarmOperation[]");
        }
        inline app::IPrewarmOperation__Array* create() {
            return il2cpp::create_object<app::IPrewarmOperation__Array>(get_class());
        }
    } // namespace IPrewarmOperation__Array
} // namespace app::classes::types