#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsHideZone__Array {
        namespace {
            app::FeedingGroundsHideZone__Array__Class* type_info_ref = nullptr;
        }
        app::FeedingGroundsHideZone__Array__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsHideZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsHideZone__Array__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsHideZone[]");
        }
        inline app::FeedingGroundsHideZone__Array* create() {
            return il2cpp::create_object<app::FeedingGroundsHideZone__Array>(get_class());
        }
    } // namespace FeedingGroundsHideZone__Array
} // namespace app::classes::types
