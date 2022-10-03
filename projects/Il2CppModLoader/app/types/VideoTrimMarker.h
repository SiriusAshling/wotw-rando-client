#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VideoTrimMarker {
        namespace {
            app::VideoTrimMarker__Class* type_info_ref = nullptr;
        }
        app::VideoTrimMarker__Class** type_info = &type_info_ref;
        inline app::VideoTrimMarker__Class* get_class() {
            return il2cpp::get_class<app::VideoTrimMarker__Class>(type_info, "", "VideoTrimMarker");
        }
        inline app::VideoTrimMarker* create() {
            return il2cpp::create_object<app::VideoTrimMarker>(get_class());
        }
    } // namespace VideoTrimMarker
} // namespace app::classes::types
