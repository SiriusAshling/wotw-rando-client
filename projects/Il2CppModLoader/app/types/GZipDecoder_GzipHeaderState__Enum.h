#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GZipDecoder_GzipHeaderState__Enum {
        namespace {
            app::GZipDecoder_GzipHeaderState__Enum__Class* type_info_ref = nullptr;
        }
        app::GZipDecoder_GzipHeaderState__Enum__Class** type_info = &type_info_ref;
        inline app::GZipDecoder_GzipHeaderState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GZipDecoder_GzipHeaderState__Enum__Class>(type_info, "Unity.IO.Compression", "GZipDecoder", "GzipHeaderState");
        }
        inline app::GZipDecoder_GzipHeaderState__Enum* create() {
            return il2cpp::create_object<app::GZipDecoder_GzipHeaderState__Enum>(get_class());
        }
    } // namespace GZipDecoder_GzipHeaderState__Enum
} // namespace app::classes::types