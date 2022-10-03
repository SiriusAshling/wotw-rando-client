#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionsTest {
        namespace {
            app::ExceptionsTest__Class* type_info_ref = nullptr;
        }
        app::ExceptionsTest__Class** type_info = &type_info_ref;
        inline app::ExceptionsTest__Class* get_class() {
            return il2cpp::get_class<app::ExceptionsTest__Class>(type_info, "", "ExceptionsTest");
        }
        inline app::ExceptionsTest* create() {
            return il2cpp::create_object<app::ExceptionsTest>(get_class());
        }
    } // namespace ExceptionsTest
} // namespace app::classes::types
