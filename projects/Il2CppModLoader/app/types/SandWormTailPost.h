#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormTailPost {
        namespace {
            app::SandWormTailPost__Class* type_info_ref = nullptr;
        }
        app::SandWormTailPost__Class** type_info = &type_info_ref;
        inline app::SandWormTailPost__Class* get_class() {
            return il2cpp::get_class<app::SandWormTailPost__Class>(type_info, "", "SandWormTailPost");
        }
        inline app::SandWormTailPost* create() {
            return il2cpp::create_object<app::SandWormTailPost>(get_class());
        }
        inline app::SandWormTailPost__Array* create_array(int size) {
            return il2cpp::array_new<app::SandWormTailPost__Array>(get_class(), size);
        }
        inline app::SandWormTailPost__Array* create_array(const std::vector<app::SandWormTailPost*>& items) {
            return il2cpp::array_new<app::SandWormTailPost__Array>(get_class(), items);
        }
    } // namespace SandWormTailPost
} // namespace app::classes::types