#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForceLanguageTranslatedMessageProvider {
        namespace {
            app::ForceLanguageTranslatedMessageProvider__Class* type_info_ref = nullptr;
        }
        app::ForceLanguageTranslatedMessageProvider__Class** type_info = &type_info_ref;
        inline app::ForceLanguageTranslatedMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::ForceLanguageTranslatedMessageProvider__Class>(type_info, "", "ForceLanguageTranslatedMessageProvider");
        }
        inline app::ForceLanguageTranslatedMessageProvider* create() {
            return il2cpp::create_object<app::ForceLanguageTranslatedMessageProvider>(get_class());
        }
    } // namespace ForceLanguageTranslatedMessageProvider
} // namespace app::classes::types