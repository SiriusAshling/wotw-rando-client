#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsSelectedSlotEmptyCondition {
        namespace {
            app::IsSelectedSlotEmptyCondition__Class* type_info_ref = nullptr;
        }
        app::IsSelectedSlotEmptyCondition__Class** type_info = &type_info_ref;
        inline app::IsSelectedSlotEmptyCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSelectedSlotEmptyCondition__Class>(type_info, "", "IsSelectedSlotEmptyCondition");
        }
        inline app::IsSelectedSlotEmptyCondition* create() {
            return il2cpp::create_object<app::IsSelectedSlotEmptyCondition>(get_class());
        }
    } // namespace IsSelectedSlotEmptyCondition
} // namespace app::classes::types