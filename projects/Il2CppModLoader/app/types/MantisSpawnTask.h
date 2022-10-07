#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisSpawnTask {
        namespace {
            app::MantisSpawnTask__Class* type_info_ref = nullptr;
        }
        app::MantisSpawnTask__Class** type_info = &type_info_ref;
        inline app::MantisSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::MantisSpawnTask__Class>(type_info, "", "MantisSpawnTask");
        }
        inline app::MantisSpawnTask* create() {
            return il2cpp::create_object<app::MantisSpawnTask>(get_class());
        }
    } // namespace MantisSpawnTask
} // namespace app::classes::types