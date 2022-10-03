#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystemBinaryWriter {
        namespace {
            app::NintendoSaveFileSystemBinaryWriter__Class* type_info_ref = nullptr;
        }
        app::NintendoSaveFileSystemBinaryWriter__Class** type_info = &type_info_ref;
        inline app::NintendoSaveFileSystemBinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystemBinaryWriter__Class>(type_info, "", "NintendoSaveFileSystemBinaryWriter");
        }
        inline app::NintendoSaveFileSystemBinaryWriter* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystemBinaryWriter>(get_class());
        }
    } // namespace NintendoSaveFileSystemBinaryWriter
} // namespace app::classes::types
