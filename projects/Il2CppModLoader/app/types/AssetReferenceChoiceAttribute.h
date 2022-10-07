#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetReferenceChoiceAttribute {
        namespace {
            app::AssetReferenceChoiceAttribute__Class* type_info_ref = nullptr;
        }
        app::AssetReferenceChoiceAttribute__Class** type_info = &type_info_ref;
        inline app::AssetReferenceChoiceAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssetReferenceChoiceAttribute__Class>(type_info, "", "AssetReferenceChoiceAttribute");
        }
        inline app::AssetReferenceChoiceAttribute* create() {
            return il2cpp::create_object<app::AssetReferenceChoiceAttribute>(get_class());
        }
    } // namespace AssetReferenceChoiceAttribute
} // namespace app::classes::types