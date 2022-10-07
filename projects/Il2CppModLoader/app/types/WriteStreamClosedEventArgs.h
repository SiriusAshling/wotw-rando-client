#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteStreamClosedEventArgs {
        namespace {
            app::WriteStreamClosedEventArgs__Class* type_info_ref = nullptr;
        }
        app::WriteStreamClosedEventArgs__Class** type_info = &type_info_ref;
        inline app::WriteStreamClosedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::WriteStreamClosedEventArgs__Class>(type_info, "System.Net", "WriteStreamClosedEventArgs");
        }
        inline app::WriteStreamClosedEventArgs* create() {
            return il2cpp::create_object<app::WriteStreamClosedEventArgs>(get_class());
        }
    } // namespace WriteStreamClosedEventArgs
} // namespace app::classes::types