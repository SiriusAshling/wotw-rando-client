#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBaseBehaviour__Array {
        namespace {
            app::SpiderBossBaseBehaviour__Array__Class* type_info_ref = nullptr;
        }
        app::SpiderBossBaseBehaviour__Array__Class** type_info = &type_info_ref;
        inline app::SpiderBossBaseBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBaseBehaviour__Array__Class>(type_info, "", "SpiderBossBaseBehaviour[]");
        }
        inline app::SpiderBossBaseBehaviour__Array* create() {
            return il2cpp::create_object<app::SpiderBossBaseBehaviour__Array>(get_class());
        }
    } // namespace SpiderBossBaseBehaviour__Array
} // namespace app::classes::types