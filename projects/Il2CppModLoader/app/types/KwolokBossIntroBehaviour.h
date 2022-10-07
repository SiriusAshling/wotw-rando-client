#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossIntroBehaviour {
        namespace {
            app::KwolokBossIntroBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossIntroBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossIntroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossIntroBehaviour__Class>(type_info, "", "KwolokBossIntroBehaviour");
        }
        inline app::KwolokBossIntroBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossIntroBehaviour>(get_class());
        }
    } // namespace KwolokBossIntroBehaviour
} // namespace app::classes::types