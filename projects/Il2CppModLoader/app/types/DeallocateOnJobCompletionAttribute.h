#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeallocateOnJobCompletionAttribute {
        namespace {
            app::DeallocateOnJobCompletionAttribute__Class* type_info_ref = nullptr;
        }
        app::DeallocateOnJobCompletionAttribute__Class** type_info = &type_info_ref;
        inline app::DeallocateOnJobCompletionAttribute__Class* get_class() {
            return il2cpp::get_class<app::DeallocateOnJobCompletionAttribute__Class>(type_info, "Unity.Collections", "DeallocateOnJobCompletionAttribute");
        }
        inline app::DeallocateOnJobCompletionAttribute* create() {
            return il2cpp::create_object<app::DeallocateOnJobCompletionAttribute>(get_class());
        }
    } // namespace DeallocateOnJobCompletionAttribute
} // namespace app::classes::types