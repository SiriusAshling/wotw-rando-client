#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer_IconObject__Array {
        namespace {
            app::MoonIconRenderer_IconObject__Array__Class* type_info_ref = nullptr;
        }
        app::MoonIconRenderer_IconObject__Array__Class** type_info = &type_info_ref;
        inline app::MoonIconRenderer_IconObject__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer_IconObject__Array__Class>(type_info, "CatlikeCoding.TextBox", "MoonIconRenderer+IconObject[]");
        }
        inline app::MoonIconRenderer_IconObject__Array* create() {
            return il2cpp::create_object<app::MoonIconRenderer_IconObject__Array>(get_class());
        }
    } // namespace MoonIconRenderer_IconObject__Array
} // namespace app::classes::types