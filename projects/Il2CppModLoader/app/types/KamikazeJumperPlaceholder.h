#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeJumperPlaceholder {
        namespace {
            app::KamikazeJumperPlaceholder__Class* type_info_ref = nullptr;
        }
        app::KamikazeJumperPlaceholder__Class** type_info = &type_info_ref;
        inline app::KamikazeJumperPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperPlaceholder__Class>(type_info, "", "KamikazeJumperPlaceholder");
        }
        inline app::KamikazeJumperPlaceholder* create() {
            return il2cpp::create_object<app::KamikazeJumperPlaceholder>(get_class());
        }
    } // namespace KamikazeJumperPlaceholder
} // namespace app::classes::types
