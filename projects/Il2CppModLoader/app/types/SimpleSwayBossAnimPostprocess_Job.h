#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayBossAnimPostprocess_Job {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleSwayBossAnimPostprocess_Job__Class** type_info;
        inline app::SimpleSwayBossAnimPostprocess_Job__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayBossAnimPostprocess_Job__Class>(type_info, "Moon", "SimpleSwayBossAnimPostprocess", "Job");
        }
        inline app::SimpleSwayBossAnimPostprocess_Job* create() {
            return il2cpp::create_object<app::SimpleSwayBossAnimPostprocess_Job>(get_class());
        }
        inline app::SimpleSwayBossAnimPostprocess_Job__Boxed* box(app::SimpleSwayBossAnimPostprocess_Job value) {
            return il2cpp::box_value<app::SimpleSwayBossAnimPostprocess_Job__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayBossAnimPostprocess_Job
} // namespace app::classes::types
