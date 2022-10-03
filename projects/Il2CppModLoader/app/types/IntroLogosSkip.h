#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntroLogosSkip {
        namespace {
            app::IntroLogosSkip__Class* type_info_ref = nullptr;
        }
        app::IntroLogosSkip__Class** type_info = &type_info_ref;
        inline app::IntroLogosSkip__Class* get_class() {
            return il2cpp::get_class<app::IntroLogosSkip__Class>(type_info, "", "IntroLogosSkip");
        }
        inline app::IntroLogosSkip* create() {
            return il2cpp::create_object<app::IntroLogosSkip>(get_class());
        }
    } // namespace IntroLogosSkip
} // namespace app::classes::types
