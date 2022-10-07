#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormSegmentTester {
        namespace {
            app::SandWormSegmentTester__Class* type_info_ref = nullptr;
        }
        app::SandWormSegmentTester__Class** type_info = &type_info_ref;
        inline app::SandWormSegmentTester__Class* get_class() {
            return il2cpp::get_class<app::SandWormSegmentTester__Class>(type_info, "", "SandWormSegmentTester");
        }
        inline app::SandWormSegmentTester* create() {
            return il2cpp::create_object<app::SandWormSegmentTester>(get_class());
        }
    } // namespace SandWormSegmentTester
} // namespace app::classes::types