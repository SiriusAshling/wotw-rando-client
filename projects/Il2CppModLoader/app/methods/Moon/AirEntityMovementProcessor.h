#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::AirEntityMovementProcessor {
    IL2CPP_REGISTER_METHOD(0x01337370, bool, get_GravityDisabled, (app::AirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01337380, void, Init, (app::AirEntityMovementProcessor * this_ptr, app::Entity* entity, app::EntityWeightData_EntityWeight__Enum weight, app::CharacterPlatformMovement* platform_movement, app::ILocomotionTurningHandler* turning_handler))
    IL2CPP_REGISTER_METHOD(0x01337500, void, UpdateAngle, (app::AirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01337750, void, OnFixedUpdate, (app::AirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8AA0, void, ctor, (app::AirEntityMovementProcessor * this_ptr))
} // namespace app::classes::Moon::AirEntityMovementProcessor
