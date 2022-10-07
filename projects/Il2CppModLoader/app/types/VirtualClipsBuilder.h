#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualClipsBuilder {
        namespace {
            app::VirtualClipsBuilder__Class* type_info_ref = nullptr;
        }
        app::VirtualClipsBuilder__Class** type_info = &type_info_ref;
        inline app::VirtualClipsBuilder__Class* get_class() {
            return il2cpp::get_class<app::VirtualClipsBuilder__Class>(type_info, "", "VirtualClipsBuilder");
        }
        inline app::VirtualClipsBuilder* create() {
            return il2cpp::create_object<app::VirtualClipsBuilder>(get_class());
        }
    } // namespace VirtualClipsBuilder
} // namespace app::classes::types