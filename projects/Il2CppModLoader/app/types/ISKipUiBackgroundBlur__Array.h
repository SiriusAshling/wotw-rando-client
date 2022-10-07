#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISKipUiBackgroundBlur__Array {
        namespace {
            app::ISKipUiBackgroundBlur__Array__Class* type_info_ref = nullptr;
        }
        app::ISKipUiBackgroundBlur__Array__Class** type_info = &type_info_ref;
        inline app::ISKipUiBackgroundBlur__Array__Class* get_class() {
            return il2cpp::get_class<app::ISKipUiBackgroundBlur__Array__Class>(type_info, "", "ISKipUiBackgroundBlur[]");
        }
        inline app::ISKipUiBackgroundBlur__Array* create() {
            return il2cpp::create_object<app::ISKipUiBackgroundBlur__Array>(get_class());
        }
    } // namespace ISKipUiBackgroundBlur__Array
} // namespace app::classes::types