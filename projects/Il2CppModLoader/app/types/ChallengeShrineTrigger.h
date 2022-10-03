#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineTrigger {
        namespace {
            app::ChallengeShrineTrigger__Class* type_info_ref = nullptr;
        }
        app::ChallengeShrineTrigger__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineTrigger__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineTrigger__Class>(type_info, "", "ChallengeShrineTrigger");
        }
        inline app::ChallengeShrineTrigger* create() {
            return il2cpp::create_object<app::ChallengeShrineTrigger>(get_class());
        }
        inline app::ChallengeShrineTrigger__Array* create_array(int size) {
            return il2cpp::array_new<app::ChallengeShrineTrigger__Array>(get_class(), size);
        }
    } // namespace ChallengeShrineTrigger
} // namespace app::classes::types
