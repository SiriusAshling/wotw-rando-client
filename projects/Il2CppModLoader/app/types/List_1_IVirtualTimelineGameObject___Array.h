#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace List_1_IVirtualTimelineGameObject___Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::List_1_IVirtualTimelineGameObject___Array__Class** type_info;
        inline app::List_1_IVirtualTimelineGameObject___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_IVirtualTimelineGameObject___Array__Class>(type_info, "System.Collections.Generic", "List`1[IVirtualTimelineGameObject][]");
        }
        inline app::List_1_IVirtualTimelineGameObject___Array* create() {
            return il2cpp::create_object<app::List_1_IVirtualTimelineGameObject___Array>(get_class());
        }
    } // namespace List_1_IVirtualTimelineGameObject___Array
} // namespace app::classes::types