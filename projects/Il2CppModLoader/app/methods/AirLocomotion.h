#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AirLocomotion {
    IL2CPP_REGISTER_METHOD(0x004F15D0, app::Transform *, get_FeetTransform, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709C00, AirLocomotion_get_FeetTransform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F1620, app::Vector3, get_FeetPosition, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741268, AirLocomotion_get_FeetPosition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F1670, bool, get_HasArrivedAtTarget, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047836C0, AirLocomotion_get_HasArrivedAtTarget__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F16C0, bool, get_IsMovingToTarget, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735688, AirLocomotion_get_IsMovingToTarget__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F1710, void, ConfigureStateMachine, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775F00, AirLocomotion_ConfigureStateMachine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F1760, app::EntityLocomotionTask *, get_DefaultFSMState, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476B7F0, AirLocomotion_get_DefaultFSMState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F17B0, float, get_Gravity, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790AB0, AirLocomotion_get_Gravity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F1800, void, set_Gravity, (app::AirLocomotion * this_ptr, float value))
    IL2CPP_REGISTER_METHODINFO(0x04730F88, AirLocomotion_set_Gravity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F1850, app::EntityWeightData_EntityWeight__Enum, get_Weight, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769938, AirLocomotion_get_Weight__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F18A0, void, set_Weight, (app::AirLocomotion * this_ptr, app::EntityWeightData_EntityWeight__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0478F980, AirLocomotion_set_Weight__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F18F0, app::EntityLocomotionTask *, GetNextBehaviour, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738068, AirLocomotion_GetNextBehaviour__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F1940, void, Stop, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471C320, AirLocomotion_Stop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F1990, void, ctor, (app::AirLocomotion * this_ptr))
}