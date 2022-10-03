#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ManifestEnvelope {
        namespace {
            app::ManifestEnvelope__Class* type_info_ref = nullptr;
        }
        app::ManifestEnvelope__Class** type_info = &type_info_ref;
        inline app::ManifestEnvelope__Class* get_class() {
            return il2cpp::get_class<app::ManifestEnvelope__Class>(type_info, "System.Diagnostics.Tracing", "ManifestEnvelope");
        }
        inline app::ManifestEnvelope* create() {
            return il2cpp::create_object<app::ManifestEnvelope>(get_class());
        }
        inline app::ManifestEnvelope__Boxed* box(app::ManifestEnvelope value) {
            return il2cpp::box_value<app::ManifestEnvelope__Boxed>(get_class(), value);
        }
    } // namespace ManifestEnvelope
} // namespace app::classes::types
