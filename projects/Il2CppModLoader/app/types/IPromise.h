#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPromise {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPromise__Class** type_info;
        inline app::IPromise__Class* get_class() {
            return il2cpp::get_class<app::IPromise__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IPromise");
        }
        inline app::IPromise__Array* create_array(int size) {
            return il2cpp::array_new<app::IPromise__Array>(get_class(), size);
        }
        inline app::IPromise__Array* create_array(const std::vector<app::IPromise*>& items) {
            return il2cpp::array_new<app::IPromise__Array>(get_class(), items);
        }
    } // namespace IPromise
} // namespace app::classes::types