#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CursorRendererOS {
        namespace {
            app::CursorRendererOS__Class* type_info_ref = nullptr;
        }
        app::CursorRendererOS__Class** type_info = &type_info_ref;
        inline app::CursorRendererOS__Class* get_class() {
            return il2cpp::get_class<app::CursorRendererOS__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CursorRendererOS");
        }
        inline app::CursorRendererOS* create() {
            return il2cpp::create_object<app::CursorRendererOS>(get_class());
        }
    } // namespace CursorRendererOS
} // namespace app::classes::types