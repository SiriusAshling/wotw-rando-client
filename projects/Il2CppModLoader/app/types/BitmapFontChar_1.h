#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitmapFontChar_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitmapFontChar_1__Class** type_info;
        inline app::BitmapFontChar_1__Class* get_class() {
            return il2cpp::get_class<app::BitmapFontChar_1__Class>(type_info, "Moon.UI", "BitmapFontChar");
        }
        inline app::BitmapFontChar_1* create() {
            return il2cpp::create_object<app::BitmapFontChar_1>(get_class());
        }
        inline app::BitmapFontChar_1__Array* create_array(int size) {
            return il2cpp::array_new<app::BitmapFontChar_1__Array>(get_class(), size);
        }
    } // namespace BitmapFontChar_1
} // namespace app::classes::types
