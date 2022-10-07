#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionBidingButton__Enum {
        namespace {
            app::InteractionBidingButton__Enum__Class* type_info_ref = nullptr;
        }
        app::InteractionBidingButton__Enum__Class** type_info = &type_info_ref;
        inline app::InteractionBidingButton__Enum__Class* get_class() {
            return il2cpp::get_class<app::InteractionBidingButton__Enum__Class>(type_info, "Moon.InteractionGraph", "InteractionBidingButton");
        }
        inline app::InteractionBidingButton__Enum* create() {
            return il2cpp::create_object<app::InteractionBidingButton__Enum>(get_class());
        }
    } // namespace InteractionBidingButton__Enum
} // namespace app::classes::types