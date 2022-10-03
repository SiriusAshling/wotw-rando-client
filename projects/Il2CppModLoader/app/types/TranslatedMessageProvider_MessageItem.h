#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TranslatedMessageProvider_MessageItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TranslatedMessageProvider_MessageItem__Class** type_info;
        inline app::TranslatedMessageProvider_MessageItem__Class* get_class() {
            return il2cpp::get_nested_class<app::TranslatedMessageProvider_MessageItem__Class>(type_info, "", "TranslatedMessageProvider", "MessageItem");
        }
        inline app::TranslatedMessageProvider_MessageItem* create() {
            return il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>(get_class());
        }
        inline app::TranslatedMessageProvider_MessageItem__Array* create_array(int size) {
            return il2cpp::array_new<app::TranslatedMessageProvider_MessageItem__Array>(get_class(), size);
        }
    } // namespace TranslatedMessageProvider_MessageItem
} // namespace app::classes::types
