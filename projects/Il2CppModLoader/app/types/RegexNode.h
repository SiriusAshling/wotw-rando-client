#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexNode__Class** type_info;
        inline app::RegexNode__Class* get_class() {
            return il2cpp::get_class<app::RegexNode__Class>(type_info, "System.Text.RegularExpressions", "RegexNode");
        }
        inline app::RegexNode* create() {
            return il2cpp::create_object<app::RegexNode>(get_class());
        }
        inline app::RegexNode__Array* create_array(int size) {
            return il2cpp::array_new<app::RegexNode__Array>(get_class(), size);
        }
        inline app::RegexNode__Array* create_array(const std::vector<app::RegexNode*>& items) {
            return il2cpp::array_new<app::RegexNode__Array>(get_class(), items);
        }
    } // namespace RegexNode
} // namespace app::classes::types