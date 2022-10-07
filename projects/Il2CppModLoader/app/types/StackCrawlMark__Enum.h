#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackCrawlMark__Enum {
        namespace {
            app::StackCrawlMark__Enum__Class* type_info_ref = nullptr;
        }
        app::StackCrawlMark__Enum__Class** type_info = &type_info_ref;
        inline app::StackCrawlMark__Enum__Class* get_class() {
            return il2cpp::get_class<app::StackCrawlMark__Enum__Class>(type_info, "System.Threading", "StackCrawlMark");
        }
        inline app::StackCrawlMark__Enum* create() {
            return il2cpp::create_object<app::StackCrawlMark__Enum>(get_class());
        }
    } // namespace StackCrawlMark__Enum
} // namespace app::classes::types