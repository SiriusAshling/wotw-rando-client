#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStressTest__Array {
        namespace {
            app::IStressTest__Array__Class* type_info_ref = nullptr;
        }
        app::IStressTest__Array__Class** type_info = &type_info_ref;
        inline app::IStressTest__Array__Class* get_class() {
            return il2cpp::get_class<app::IStressTest__Array__Class>(type_info, "", "IStressTest[]");
        }
        inline app::IStressTest__Array* create() {
            return il2cpp::create_object<app::IStressTest__Array>(get_class());
        }
    } // namespace IStressTest__Array
} // namespace app::classes::types