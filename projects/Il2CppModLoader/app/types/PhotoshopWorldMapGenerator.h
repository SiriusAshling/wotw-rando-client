#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhotoshopWorldMapGenerator {
        namespace {
            app::PhotoshopWorldMapGenerator__Class* type_info_ref = nullptr;
        }
        app::PhotoshopWorldMapGenerator__Class** type_info = &type_info_ref;
        inline app::PhotoshopWorldMapGenerator__Class* get_class() {
            return il2cpp::get_class<app::PhotoshopWorldMapGenerator__Class>(type_info, "", "PhotoshopWorldMapGenerator");
        }
        inline app::PhotoshopWorldMapGenerator* create() {
            return il2cpp::create_object<app::PhotoshopWorldMapGenerator>(get_class());
        }
    } // namespace PhotoshopWorldMapGenerator
} // namespace app::classes::types