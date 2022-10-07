#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonWriter_State__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonWriter_State__Enum__Class** type_info;
        inline app::JsonWriter_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonWriter_State__Enum__Class>(type_info, "Newtonsoft.Json", "JsonWriter", "State");
        }
        inline app::JsonWriter_State__Enum* create() {
            return il2cpp::create_object<app::JsonWriter_State__Enum>(get_class());
        }
        inline app::JsonWriter_State__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonWriter_State__Enum__Array>(get_class(), size);
        }
        inline app::JsonWriter_State__Enum__Array* create_array(const std::vector<app::JsonWriter_State__Enum*>& items) {
            return il2cpp::array_new<app::JsonWriter_State__Enum__Array>(get_class(), items);
        }
    } // namespace JsonWriter_State__Enum
} // namespace app::classes::types