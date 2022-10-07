#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Attributes {
        namespace {
            app::Attributes__Class* type_info_ref = nullptr;
        }
        app::Attributes__Class** type_info = &type_info_ref;
        inline app::Attributes__Class* get_class() {
            return il2cpp::get_class<app::Attributes__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Attributes");
        }
        inline app::Attributes* create() {
            return il2cpp::create_object<app::Attributes>(get_class());
        }
        inline app::Attributes__Array* create_array(int size) {
            return il2cpp::array_new<app::Attributes__Array>(get_class(), size);
        }
        inline app::Attributes__Array* create_array(const std::vector<app::Attributes*>& items) {
            return il2cpp::array_new<app::Attributes__Array>(get_class(), items);
        }
    } // namespace Attributes
} // namespace app::classes::types