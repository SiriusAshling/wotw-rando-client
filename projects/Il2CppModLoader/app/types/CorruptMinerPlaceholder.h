#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CorruptMinerPlaceholder {
        namespace {
            app::CorruptMinerPlaceholder__Class* type_info_ref = nullptr;
        }
        app::CorruptMinerPlaceholder__Class** type_info = &type_info_ref;
        inline app::CorruptMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CorruptMinerPlaceholder__Class>(type_info, "", "CorruptMinerPlaceholder");
        }
        inline app::CorruptMinerPlaceholder* create() {
            return il2cpp::create_object<app::CorruptMinerPlaceholder>(get_class());
        }
    } // namespace CorruptMinerPlaceholder
} // namespace app::classes::types