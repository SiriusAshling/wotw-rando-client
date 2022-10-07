#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossDryPhaseStartBehaviour {
        namespace {
            app::KwolokBossDryPhaseStartBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossDryPhaseStartBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossDryPhaseStartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossDryPhaseStartBehaviour__Class>(type_info, "", "KwolokBossDryPhaseStartBehaviour");
        }
        inline app::KwolokBossDryPhaseStartBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossDryPhaseStartBehaviour>(get_class());
        }
    } // namespace KwolokBossDryPhaseStartBehaviour
} // namespace app::classes::types