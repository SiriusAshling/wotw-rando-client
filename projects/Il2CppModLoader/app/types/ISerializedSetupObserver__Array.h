#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISerializedSetupObserver__Array {
        namespace {
            app::ISerializedSetupObserver__Array__Class* type_info_ref = nullptr;
        }
        app::ISerializedSetupObserver__Array__Class** type_info = &type_info_ref;
        inline app::ISerializedSetupObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ISerializedSetupObserver__Array__Class>(type_info, "", "ISerializedSetupObserver[]");
        }
        inline app::ISerializedSetupObserver__Array* create() {
            return il2cpp::create_object<app::ISerializedSetupObserver__Array>(get_class());
        }
    } // namespace ISerializedSetupObserver__Array
} // namespace app::classes::types
