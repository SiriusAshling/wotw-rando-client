#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossUnderwaterPullBehaviour {
        namespace {
            app::KwolokBossUnderwaterPullBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossUnderwaterPullBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossUnderwaterPullBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossUnderwaterPullBehaviour__Class>(type_info, "", "KwolokBossUnderwaterPullBehaviour");
        }
        inline app::KwolokBossUnderwaterPullBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossUnderwaterPullBehaviour>(get_class());
        }
    } // namespace KwolokBossUnderwaterPullBehaviour
} // namespace app::classes::types
