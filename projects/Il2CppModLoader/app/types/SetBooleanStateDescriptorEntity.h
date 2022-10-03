#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetBooleanStateDescriptorEntity {
        namespace {
            app::SetBooleanStateDescriptorEntity__Class* type_info_ref = nullptr;
        }
        app::SetBooleanStateDescriptorEntity__Class** type_info = &type_info_ref;
        inline app::SetBooleanStateDescriptorEntity__Class* get_class() {
            return il2cpp::get_class<app::SetBooleanStateDescriptorEntity__Class>(type_info, "Moon.Timeline", "SetBooleanStateDescriptorEntity");
        }
        inline app::SetBooleanStateDescriptorEntity* create() {
            return il2cpp::create_object<app::SetBooleanStateDescriptorEntity>(get_class());
        }
    } // namespace SetBooleanStateDescriptorEntity
} // namespace app::classes::types
