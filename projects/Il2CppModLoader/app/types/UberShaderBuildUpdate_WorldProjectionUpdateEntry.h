#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderBuildUpdate_WorldProjectionUpdateEntry {
        namespace {
            app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class* type_info_ref = nullptr;
        }
        app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class** type_info = &type_info_ref;
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class>(type_info, "", "UberShaderBuildUpdate", "WorldProjectionUpdateEntry");
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry* create() {
            return il2cpp::create_object<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry>(get_class());
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array>(get_class(), size);
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array* create_array(const std::vector<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry*>& items) {
            return il2cpp::array_new<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array>(get_class(), items);
        }
    } // namespace UberShaderBuildUpdate_WorldProjectionUpdateEntry
} // namespace app::classes::types