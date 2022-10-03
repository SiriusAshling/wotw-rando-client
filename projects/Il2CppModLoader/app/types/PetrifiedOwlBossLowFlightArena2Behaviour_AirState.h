#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightArena2Behaviour_AirState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class** type_info;
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class>(type_info, "", "PetrifiedOwlBossLowFlightArena2Behaviour", "AirState");
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightArena2Behaviour_AirState
} // namespace app::classes::types
