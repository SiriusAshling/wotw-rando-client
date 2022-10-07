#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyReadOnlyDictionaryInternal_NodeEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class** type_info;
        inline app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class>(type_info, "System.Collections", "EmptyReadOnlyDictionaryInternal", "NodeEnumerator");
        }
        inline app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* create() {
            return il2cpp::create_object<app::EmptyReadOnlyDictionaryInternal_NodeEnumerator>(get_class());
        }
    } // namespace EmptyReadOnlyDictionaryInternal_NodeEnumerator
} // namespace app::classes::types