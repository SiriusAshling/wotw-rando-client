#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EItemPreviewType__Enum {
        namespace {
            app::EItemPreviewType__Enum__Class* type_info_ref = nullptr;
        }
        app::EItemPreviewType__Enum__Class** type_info = &type_info_ref;
        inline app::EItemPreviewType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EItemPreviewType__Enum__Class>(type_info, "Steamworks", "EItemPreviewType");
        }
        inline app::EItemPreviewType__Enum* create() {
            return il2cpp::create_object<app::EItemPreviewType__Enum>(get_class());
        }
    } // namespace EItemPreviewType__Enum
} // namespace app::classes::types