#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Char {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Char__Class** type_info;
        inline app::Char__Class* get_class() {
            return il2cpp::get_class<app::Char__Class>(type_info, "System", "Char");
        }
        inline app::Char* create() {
            return il2cpp::create_object<app::Char>(get_class());
        }
        inline app::Char__Boxed* box(uint16_t value) {
            return il2cpp::box_value<app::Char__Boxed>(get_class(), value);
        }
        inline app::Char__Array* create_array(int size) {
            return il2cpp::array_new<app::Char__Array>(get_class(), size);
        }
        inline app::Char__Array* create_array(const std::vector<app::Char>& items) {
            return il2cpp::array_new<app::Char__Array>(get_class(), items);
        }
    } // namespace Char
} // namespace app::classes::types
