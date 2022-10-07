#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Promise_ResolveHandler__Array {
        namespace {
            app::Promise_ResolveHandler__Array__Class* type_info_ref = nullptr;
        }
        app::Promise_ResolveHandler__Array__Class** type_info = &type_info_ref;
        inline app::Promise_ResolveHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::Promise_ResolveHandler__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Promise+ResolveHandler[]");
        }
        inline app::Promise_ResolveHandler__Array* create() {
            return il2cpp::create_object<app::Promise_ResolveHandler__Array>(get_class());
        }
    } // namespace Promise_ResolveHandler__Array
} // namespace app::classes::types