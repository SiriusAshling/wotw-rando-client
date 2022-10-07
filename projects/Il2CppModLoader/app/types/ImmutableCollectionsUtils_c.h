#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImmutableCollectionsUtils_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ImmutableCollectionsUtils_c__Class** type_info;
        inline app::ImmutableCollectionsUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ImmutableCollectionsUtils_c__Class>(type_info, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils", "<>c");
        }
        inline app::ImmutableCollectionsUtils_c* create() {
            return il2cpp::create_object<app::ImmutableCollectionsUtils_c>(get_class());
        }
    } // namespace ImmutableCollectionsUtils_c
} // namespace app::classes::types