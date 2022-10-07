#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrimeGeneratorBase {
        namespace {
            app::PrimeGeneratorBase__Class* type_info_ref = nullptr;
        }
        app::PrimeGeneratorBase__Class** type_info = &type_info_ref;
        inline app::PrimeGeneratorBase__Class* get_class() {
            return il2cpp::get_class<app::PrimeGeneratorBase__Class>(type_info, "Mono.Math.Prime.Generator", "PrimeGeneratorBase");
        }
        inline app::PrimeGeneratorBase* create() {
            return il2cpp::create_object<app::PrimeGeneratorBase>(get_class());
        }
    } // namespace PrimeGeneratorBase
} // namespace app::classes::types