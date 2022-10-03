#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyUnityTextFadeWordsAnimator {
        namespace {
            app::LegacyUnityTextFadeWordsAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyUnityTextFadeWordsAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyUnityTextFadeWordsAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyUnityTextFadeWordsAnimator__Class>(type_info, "", "LegacyUnityTextFadeWordsAnimator");
        }
        inline app::LegacyUnityTextFadeWordsAnimator* create() {
            return il2cpp::create_object<app::LegacyUnityTextFadeWordsAnimator>(get_class());
        }
    } // namespace LegacyUnityTextFadeWordsAnimator
} // namespace app::classes::types
