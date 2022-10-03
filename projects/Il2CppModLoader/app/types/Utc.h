#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Utc {
        namespace {
            app::Utc__Class* type_info_ref = nullptr;
        }
        app::Utc__Class** type_info = &type_info_ref;
        inline app::Utc__Class* get_class() {
            return il2cpp::get_class<app::Utc__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Utc");
        }
        inline app::Utc* create() {
            return il2cpp::create_object<app::Utc>(get_class());
        }
        inline app::Utc__Array* create_array(int size) {
            return il2cpp::array_new<app::Utc__Array>(get_class(), size);
        }
    } // namespace Utc
} // namespace app::classes::types
