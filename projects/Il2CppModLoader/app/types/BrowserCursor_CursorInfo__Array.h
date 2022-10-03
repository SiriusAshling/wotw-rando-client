#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserCursor_CursorInfo__Array {
        namespace {
            app::BrowserCursor_CursorInfo__Array__Class* type_info_ref = nullptr;
        }
        app::BrowserCursor_CursorInfo__Array__Class** type_info = &type_info_ref;
        inline app::BrowserCursor_CursorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::BrowserCursor_CursorInfo__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserCursor+CursorInfo[]");
        }
        inline app::BrowserCursor_CursorInfo__Array* create() {
            return il2cpp::create_object<app::BrowserCursor_CursorInfo__Array>(get_class());
        }
    } // namespace BrowserCursor_CursorInfo__Array
} // namespace app::classes::types
