#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokChase {
        namespace {
            app::KwolokChase__Class* type_info_ref = nullptr;
        }
        app::KwolokChase__Class** type_info = &type_info_ref;
        inline app::KwolokChase__Class* get_class() {
            return il2cpp::get_class<app::KwolokChase__Class>(type_info, "", "KwolokChase");
        }
        inline app::KwolokChase* create() {
            return il2cpp::create_object<app::KwolokChase>(get_class());
        }
    } // namespace KwolokChase
} // namespace app::classes::types