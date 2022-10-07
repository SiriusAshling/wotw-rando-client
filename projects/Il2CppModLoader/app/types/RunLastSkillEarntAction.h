#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RunLastSkillEarntAction {
        namespace {
            app::RunLastSkillEarntAction__Class* type_info_ref = nullptr;
        }
        app::RunLastSkillEarntAction__Class** type_info = &type_info_ref;
        inline app::RunLastSkillEarntAction__Class* get_class() {
            return il2cpp::get_class<app::RunLastSkillEarntAction__Class>(type_info, "", "RunLastSkillEarntAction");
        }
        inline app::RunLastSkillEarntAction* create() {
            return il2cpp::create_object<app::RunLastSkillEarntAction>(get_class());
        }
    } // namespace RunLastSkillEarntAction
} // namespace app::classes::types