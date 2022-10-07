#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StandaloneWebResources_IndexEntry {
        namespace {
            app::StandaloneWebResources_IndexEntry__Class* type_info_ref = nullptr;
        }
        app::StandaloneWebResources_IndexEntry__Class** type_info = &type_info_ref;
        inline app::StandaloneWebResources_IndexEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StandaloneWebResources_IndexEntry__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "StandaloneWebResources", "IndexEntry");
        }
        inline app::StandaloneWebResources_IndexEntry* create() {
            return il2cpp::create_object<app::StandaloneWebResources_IndexEntry>(get_class());
        }
        inline app::StandaloneWebResources_IndexEntry__Boxed* box(app::StandaloneWebResources_IndexEntry value) {
            return il2cpp::box_value<app::StandaloneWebResources_IndexEntry__Boxed>(get_class(), value);
        }
        inline app::StandaloneWebResources_IndexEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StandaloneWebResources_IndexEntry__Array>(get_class(), size);
        }
        inline app::StandaloneWebResources_IndexEntry__Array* create_array(const std::vector<app::StandaloneWebResources_IndexEntry>& items) {
            return il2cpp::array_new<app::StandaloneWebResources_IndexEntry__Array>(get_class(), items);
        }
    } // namespace StandaloneWebResources_IndexEntry
} // namespace app::classes::types
