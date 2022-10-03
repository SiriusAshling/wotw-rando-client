#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordEntry {
        namespace {
            app::RecordEntry__Class* type_info_ref = nullptr;
        }
        app::RecordEntry__Class** type_info = &type_info_ref;
        inline app::RecordEntry__Class* get_class() {
            return il2cpp::get_class<app::RecordEntry__Class>(type_info, "PhysicsDebugTools", "RecordEntry");
        }
        inline app::RecordEntry* create() {
            return il2cpp::create_object<app::RecordEntry>(get_class());
        }
        inline app::RecordEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RecordEntry__Array>(get_class(), size);
        }
    } // namespace RecordEntry
} // namespace app::classes::types
