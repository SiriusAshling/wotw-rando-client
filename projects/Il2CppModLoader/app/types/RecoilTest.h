#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecoilTest {
        namespace {
            app::RecoilTest__Class* type_info_ref = nullptr;
        }
        app::RecoilTest__Class** type_info = &type_info_ref;
        inline app::RecoilTest__Class* get_class() {
            return il2cpp::get_class<app::RecoilTest__Class>(type_info, "RootMotion.Demos", "RecoilTest");
        }
        inline app::RecoilTest* create() {
            return il2cpp::create_object<app::RecoilTest>(get_class());
        }
    } // namespace RecoilTest
} // namespace app::classes::types