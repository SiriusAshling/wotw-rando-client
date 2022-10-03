#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleTest_Segment {
        namespace {
            app::TentacleTest_Segment__Class* type_info_ref = nullptr;
        }
        app::TentacleTest_Segment__Class** type_info = &type_info_ref;
        inline app::TentacleTest_Segment__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleTest_Segment__Class>(type_info, "", "TentacleTest", "Segment");
        }
        inline app::TentacleTest_Segment* create() {
            return il2cpp::create_object<app::TentacleTest_Segment>(get_class());
        }
        inline app::TentacleTest_Segment__Array* create_array(int size) {
            return il2cpp::array_new<app::TentacleTest_Segment__Array>(get_class(), size);
        }
    } // namespace TentacleTest_Segment
} // namespace app::classes::types
