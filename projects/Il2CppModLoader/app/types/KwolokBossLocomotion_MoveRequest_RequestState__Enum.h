#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_MoveRequest_RequestState__Enum {
        namespace {
            app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class* type_info_ref = nullptr;
        }
        app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class>(type_info, "", "KwolokBossLocomotion+MoveRequest", "RequestState");
        }
        inline app::KwolokBossLocomotion_MoveRequest_RequestState__Enum* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_MoveRequest_RequestState__Enum>(get_class());
        }
    } // namespace KwolokBossLocomotion_MoveRequest_RequestState__Enum
} // namespace app::classes::types
