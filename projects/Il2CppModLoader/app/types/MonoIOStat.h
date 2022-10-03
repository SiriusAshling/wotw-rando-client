#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoIOStat {
        namespace {
            app::MonoIOStat__Class* type_info_ref = nullptr;
        }
        app::MonoIOStat__Class** type_info = &type_info_ref;
        inline app::MonoIOStat__Class* get_class() {
            return il2cpp::get_class<app::MonoIOStat__Class>(type_info, "System.IO", "MonoIOStat");
        }
        inline app::MonoIOStat* create() {
            return il2cpp::create_object<app::MonoIOStat>(get_class());
        }
        inline app::MonoIOStat__Boxed* box(app::MonoIOStat value) {
            return il2cpp::box_value<app::MonoIOStat__Boxed>(get_class(), value);
        }
    } // namespace MonoIOStat
} // namespace app::classes::types
