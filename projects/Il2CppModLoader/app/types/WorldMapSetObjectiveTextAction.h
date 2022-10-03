#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldMapSetObjectiveTextAction {
        namespace {
            app::WorldMapSetObjectiveTextAction__Class* type_info_ref = nullptr;
        }
        app::WorldMapSetObjectiveTextAction__Class** type_info = &type_info_ref;
        inline app::WorldMapSetObjectiveTextAction__Class* get_class() {
            return il2cpp::get_class<app::WorldMapSetObjectiveTextAction__Class>(type_info, "", "WorldMapSetObjectiveTextAction");
        }
        inline app::WorldMapSetObjectiveTextAction* create() {
            return il2cpp::create_object<app::WorldMapSetObjectiveTextAction>(get_class());
        }
    } // namespace WorldMapSetObjectiveTextAction
} // namespace app::classes::types
