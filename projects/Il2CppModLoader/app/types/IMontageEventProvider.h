#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMontageEventProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMontageEventProvider__Class** type_info;
        inline app::IMontageEventProvider__Class* get_class() {
            return il2cpp::get_class<app::IMontageEventProvider__Class>(type_info, "", "IMontageEventProvider");
        }
        inline app::IMontageEventProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IMontageEventProvider__Array>(get_class(), size);
        }
        inline app::IMontageEventProvider__Array* create_array(const std::vector<app::IMontageEventProvider*>& items) {
            return il2cpp::array_new<app::IMontageEventProvider__Array>(get_class(), items);
        }
    } // namespace IMontageEventProvider
} // namespace app::classes::types