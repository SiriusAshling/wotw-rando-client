#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonType__Enum__Class** type_info;
        inline app::BsonType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BsonType__Enum__Class>(type_info, "Newtonsoft.Json.Bson", "BsonType");
        }
        inline app::BsonType__Enum* create() {
            return il2cpp::create_object<app::BsonType__Enum>(get_class());
        }
    } // namespace BsonType__Enum
} // namespace app::classes::types
