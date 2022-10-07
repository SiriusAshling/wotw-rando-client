#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueuePriorityMode__Enum {
        namespace {
            app::SceneLoadingQueuePriorityMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SceneLoadingQueuePriorityMode__Enum__Class** type_info = &type_info_ref;
        inline app::SceneLoadingQueuePriorityMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingQueuePriorityMode__Enum__Class>(type_info, "", "SceneLoadingQueuePriorityMode");
        }
        inline app::SceneLoadingQueuePriorityMode__Enum* create() {
            return il2cpp::create_object<app::SceneLoadingQueuePriorityMode__Enum>(get_class());
        }
    } // namespace SceneLoadingQueuePriorityMode__Enum
} // namespace app::classes::types