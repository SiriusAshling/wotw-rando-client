#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RaceMenuScreenNotificationSystem {
    IL2CPP_REGISTER_METHOD(0x0070EBC0, void, ctor, (app::RaceMenuScreenNotificationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070EEA0, void, UpdateNotificationSystem, (app::RaceMenuScreenNotificationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070EFE0, void, Initiate, (app::RaceMenuScreenNotificationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070F090, void, CreateAndRunNotificationCheckers, (app::RaceMenuScreenNotificationSystem * this_ptr, app::RaceSettings__Array* race_settings_array, app::UberStateValueStore* uber_state_value_store, int32_t save_slot_index))
    IL2CPP_REGISTER_METHOD(0x0070F480, bool, ShouldShowNotification, (app::RaceMenuScreenNotificationSystem * this_ptr, app::String* leaderboards_i_d, app::Action_1_Boolean_* show_notification_action))
    IL2CPP_REGISTER_METHOD(0x0070F710, bool, IsThereAnyNotification, (app::RaceMenuScreenNotificationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070F8A0, void, NotificationSeen, (app::RaceMenuScreenNotificationSystem * this_ptr, app::String* leaderboards_i_d))
} // namespace app::classes::RaceMenuScreenNotificationSystem
