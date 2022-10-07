#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_PrefabInfo__Array {
        namespace {
            app::UberPoolPerfTest_PrefabInfo__Array__Class* type_info_ref = nullptr;
        }
        app::UberPoolPerfTest_PrefabInfo__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolPerfTest_PrefabInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPerfTest_PrefabInfo__Array__Class>(type_info, "", "UberPoolPerfTest+PrefabInfo[]");
        }
        inline app::UberPoolPerfTest_PrefabInfo__Array* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_PrefabInfo__Array>(get_class());
        }
    } // namespace UberPoolPerfTest_PrefabInfo__Array
} // namespace app::classes::types