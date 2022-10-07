#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VelocityChangeEntry {
        namespace {
            app::VelocityChangeEntry__Class* type_info_ref = nullptr;
        }
        app::VelocityChangeEntry__Class** type_info = &type_info_ref;
        inline app::VelocityChangeEntry__Class* get_class() {
            return il2cpp::get_class<app::VelocityChangeEntry__Class>(type_info, "PhysicsDebugTools", "VelocityChangeEntry");
        }
        inline app::VelocityChangeEntry* create() {
            return il2cpp::create_object<app::VelocityChangeEntry>(get_class());
        }
        inline app::VelocityChangeEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::VelocityChangeEntry__Array>(get_class(), size);
        }
        inline app::VelocityChangeEntry__Array* create_array(const std::vector<app::VelocityChangeEntry*>& items) {
            return il2cpp::array_new<app::VelocityChangeEntry__Array>(get_class(), items);
        }
    } // namespace VelocityChangeEntry
} // namespace app::classes::types