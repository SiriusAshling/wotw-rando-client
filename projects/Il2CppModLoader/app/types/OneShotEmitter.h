#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneShotEmitter {
        namespace {
            app::OneShotEmitter__Class* type_info_ref = nullptr;
        }
        app::OneShotEmitter__Class** type_info = &type_info_ref;
        inline app::OneShotEmitter__Class* get_class() {
            return il2cpp::get_class<app::OneShotEmitter__Class>(type_info, "", "OneShotEmitter");
        }
        inline app::OneShotEmitter* create() {
            return il2cpp::create_object<app::OneShotEmitter>(get_class());
        }
    } // namespace OneShotEmitter
} // namespace app::classes::types
