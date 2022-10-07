#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatUISlot {
        namespace {
            app::StatUISlot__Class* type_info_ref = nullptr;
        }
        app::StatUISlot__Class** type_info = &type_info_ref;
        inline app::StatUISlot__Class* get_class() {
            return il2cpp::get_class<app::StatUISlot__Class>(type_info, "", "StatUISlot");
        }
        inline app::StatUISlot* create() {
            return il2cpp::create_object<app::StatUISlot>(get_class());
        }
    } // namespace StatUISlot
} // namespace app::classes::types