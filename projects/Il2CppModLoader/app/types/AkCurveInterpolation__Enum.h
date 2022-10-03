#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCurveInterpolation__Enum {
        namespace {
            app::AkCurveInterpolation__Enum__Class* type_info_ref = nullptr;
        }
        app::AkCurveInterpolation__Enum__Class** type_info = &type_info_ref;
        inline app::AkCurveInterpolation__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkCurveInterpolation__Enum__Class>(type_info, "", "AkCurveInterpolation");
        }
        inline app::AkCurveInterpolation__Enum* create() {
            return il2cpp::create_object<app::AkCurveInterpolation__Enum>(get_class());
        }
    } // namespace AkCurveInterpolation__Enum
} // namespace app::classes::types
