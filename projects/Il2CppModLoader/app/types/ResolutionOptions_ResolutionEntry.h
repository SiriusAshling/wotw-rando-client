#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions_ResolutionEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResolutionOptions_ResolutionEntry__Class** type_info;
        inline app::ResolutionOptions_ResolutionEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::ResolutionOptions_ResolutionEntry__Class>(type_info, "", "ResolutionOptions", "ResolutionEntry");
        }
        inline app::ResolutionOptions_ResolutionEntry* create() {
            return il2cpp::create_object<app::ResolutionOptions_ResolutionEntry>(get_class());
        }
        inline app::ResolutionOptions_ResolutionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ResolutionOptions_ResolutionEntry__Array>(get_class(), size);
        }
        inline app::ResolutionOptions_ResolutionEntry__Array* create_array(const std::vector<app::ResolutionOptions_ResolutionEntry*>& items) {
            return il2cpp::array_new<app::ResolutionOptions_ResolutionEntry__Array>(get_class(), items);
        }
    } // namespace ResolutionOptions_ResolutionEntry
} // namespace app::classes::types