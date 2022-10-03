#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatSprayShotBehaviour {
        namespace {
            app::SpiderBatSprayShotBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBatSprayShotBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatSprayShotBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatSprayShotBehaviour__Class>(type_info, "", "SpiderBatSprayShotBehaviour");
        }
        inline app::SpiderBatSprayShotBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatSprayShotBehaviour>(get_class());
        }
    } // namespace SpiderBatSprayShotBehaviour
} // namespace app::classes::types
