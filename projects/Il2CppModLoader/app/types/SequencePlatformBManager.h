#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformBManager {
        namespace {
            app::SequencePlatformBManager__Class* type_info_ref = nullptr;
        }
        app::SequencePlatformBManager__Class** type_info = &type_info_ref;
        inline app::SequencePlatformBManager__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformBManager__Class>(type_info, "", "SequencePlatformBManager");
        }
        inline app::SequencePlatformBManager* create() {
            return il2cpp::create_object<app::SequencePlatformBManager>(get_class());
        }
    } // namespace SequencePlatformBManager
} // namespace app::classes::types