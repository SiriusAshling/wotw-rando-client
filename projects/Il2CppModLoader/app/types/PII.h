#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PII {
        namespace {
            app::PII__Class* type_info_ref = nullptr;
        }
        app::PII__Class** type_info = &type_info_ref;
        inline app::PII__Class* get_class() {
            return il2cpp::get_class<app::PII__Class>(type_info, "Microsoft.Applications.Events.DataModels", "PII");
        }
        inline app::PII* create() {
            return il2cpp::create_object<app::PII>(get_class());
        }
        inline app::PII__Array* create_array(int size) {
            return il2cpp::array_new<app::PII__Array>(get_class(), size);
        }
    } // namespace PII
} // namespace app::classes::types
