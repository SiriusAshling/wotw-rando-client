#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoList {
        namespace {
            app::DemoList__Class* type_info_ref = nullptr;
        }
        app::DemoList__Class** type_info = &type_info_ref;
        inline app::DemoList__Class* get_class() {
            return il2cpp::get_class<app::DemoList__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DemoList");
        }
        inline app::DemoList* create() {
            return il2cpp::create_object<app::DemoList>(get_class());
        }
    } // namespace DemoList
} // namespace app::classes::types