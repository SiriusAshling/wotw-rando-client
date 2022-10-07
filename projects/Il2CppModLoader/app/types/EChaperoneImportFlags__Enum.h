#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EChaperoneImportFlags__Enum {
        namespace {
            app::EChaperoneImportFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::EChaperoneImportFlags__Enum__Class** type_info = &type_info_ref;
        inline app::EChaperoneImportFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChaperoneImportFlags__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EChaperoneImportFlags");
        }
        inline app::EChaperoneImportFlags__Enum* create() {
            return il2cpp::create_object<app::EChaperoneImportFlags__Enum>(get_class());
        }
    } // namespace EChaperoneImportFlags__Enum
} // namespace app::classes::types