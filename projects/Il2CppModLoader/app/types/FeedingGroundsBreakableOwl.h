#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsBreakableOwl {
        namespace {
            app::FeedingGroundsBreakableOwl__Class* type_info_ref = nullptr;
        }
        app::FeedingGroundsBreakableOwl__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsBreakableOwl__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsBreakableOwl__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsBreakableOwl");
        }
        inline app::FeedingGroundsBreakableOwl* create() {
            return il2cpp::create_object<app::FeedingGroundsBreakableOwl>(get_class());
        }
    } // namespace FeedingGroundsBreakableOwl
} // namespace app::classes::types
