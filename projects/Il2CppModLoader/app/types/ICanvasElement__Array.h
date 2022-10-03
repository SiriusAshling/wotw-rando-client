#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICanvasElement__Array {
        namespace {
            app::ICanvasElement__Array__Class* type_info_ref = nullptr;
        }
        app::ICanvasElement__Array__Class** type_info = &type_info_ref;
        inline app::ICanvasElement__Array__Class* get_class() {
            return il2cpp::get_class<app::ICanvasElement__Array__Class>(type_info, "UnityEngine.UI", "ICanvasElement[]");
        }
        inline app::ICanvasElement__Array* create() {
            return il2cpp::create_object<app::ICanvasElement__Array>(get_class());
        }
    } // namespace ICanvasElement__Array
} // namespace app::classes::types
