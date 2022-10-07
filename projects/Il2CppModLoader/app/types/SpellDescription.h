#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellDescription {
        namespace {
            app::SpellDescription__Class* type_info_ref = nullptr;
        }
        app::SpellDescription__Class** type_info = &type_info_ref;
        inline app::SpellDescription__Class* get_class() {
            return il2cpp::get_class<app::SpellDescription__Class>(type_info, "", "SpellDescription");
        }
        inline app::SpellDescription* create() {
            return il2cpp::create_object<app::SpellDescription>(get_class());
        }
        inline app::SpellDescription__Array* create_array(int size) {
            return il2cpp::array_new<app::SpellDescription__Array>(get_class(), size);
        }
        inline app::SpellDescription__Array* create_array(const std::vector<app::SpellDescription*>& items) {
            return il2cpp::array_new<app::SpellDescription__Array>(get_class(), items);
        }
    } // namespace SpellDescription
} // namespace app::classes::types