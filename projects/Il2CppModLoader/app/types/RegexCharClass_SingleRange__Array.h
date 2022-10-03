#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass_SingleRange__Array {
        namespace {
            app::RegexCharClass_SingleRange__Array__Class* type_info_ref = nullptr;
        }
        app::RegexCharClass_SingleRange__Array__Class** type_info = &type_info_ref;
        inline app::RegexCharClass_SingleRange__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexCharClass_SingleRange__Array__Class>(type_info, "System.Text.RegularExpressions", "RegexCharClass+SingleRange[]");
        }
        inline app::RegexCharClass_SingleRange__Array* create() {
            return il2cpp::create_object<app::RegexCharClass_SingleRange__Array>(get_class());
        }
    } // namespace RegexCharClass_SingleRange__Array
} // namespace app::classes::types
