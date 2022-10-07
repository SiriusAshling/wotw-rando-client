#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonToken {
        namespace {
            app::BsonToken__Class* type_info_ref = nullptr;
        }
        app::BsonToken__Class** type_info = &type_info_ref;
        inline app::BsonToken__Class* get_class() {
            return il2cpp::get_class<app::BsonToken__Class>(type_info, "Newtonsoft.Json.Bson", "BsonToken");
        }
        inline app::BsonToken* create() {
            return il2cpp::create_object<app::BsonToken>(get_class());
        }
        inline app::BsonToken__Array* create_array(int size) {
            return il2cpp::array_new<app::BsonToken__Array>(get_class(), size);
        }
        inline app::BsonToken__Array* create_array(const std::vector<app::BsonToken*>& items) {
            return il2cpp::array_new<app::BsonToken__Array>(get_class(), items);
        }
    } // namespace BsonToken
} // namespace app::classes::types