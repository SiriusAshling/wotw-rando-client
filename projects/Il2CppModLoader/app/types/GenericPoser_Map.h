#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericPoser_Map {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericPoser_Map__Class** type_info;
        inline app::GenericPoser_Map__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericPoser_Map__Class>(type_info, "RootMotion.FinalIK", "GenericPoser", "Map");
        }
        inline app::GenericPoser_Map* create() {
            return il2cpp::create_object<app::GenericPoser_Map>(get_class());
        }
        inline app::GenericPoser_Map__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericPoser_Map__Array>(get_class(), size);
        }
    } // namespace GenericPoser_Map
} // namespace app::classes::types
