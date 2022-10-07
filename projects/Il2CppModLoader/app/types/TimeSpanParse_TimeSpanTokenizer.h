#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanTokenizer {
        namespace {
            app::TimeSpanParse_TimeSpanTokenizer__Class* type_info_ref = nullptr;
        }
        app::TimeSpanParse_TimeSpanTokenizer__Class** type_info = &type_info_ref;
        inline app::TimeSpanParse_TimeSpanTokenizer__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TimeSpanTokenizer__Class>(type_info, "System.Globalization", "TimeSpanParse", "TimeSpanTokenizer");
        }
        inline app::TimeSpanParse_TimeSpanTokenizer* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanTokenizer>(get_class());
        }
        inline app::TimeSpanParse_TimeSpanTokenizer__Boxed* box(app::TimeSpanParse_TimeSpanTokenizer value) {
            return il2cpp::box_value<app::TimeSpanParse_TimeSpanTokenizer__Boxed>(get_class(), value);
        }
    } // namespace TimeSpanParse_TimeSpanTokenizer
} // namespace app::classes::types