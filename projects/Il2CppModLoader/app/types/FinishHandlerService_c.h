#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FinishHandlerService_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FinishHandlerService_c__Class** type_info;
        inline app::FinishHandlerService_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FinishHandlerService_c__Class>(type_info, "", "FinishHandlerService", "<>c");
        }
        inline app::FinishHandlerService_c* create() {
            return il2cpp::create_object<app::FinishHandlerService_c>(get_class());
        }
    } // namespace FinishHandlerService_c
} // namespace app::classes::types