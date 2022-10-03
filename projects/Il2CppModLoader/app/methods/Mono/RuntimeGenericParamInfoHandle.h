#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::RuntimeGenericParamInfoHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr, void* ptr))
    IL2CPP_REGISTER_METHOD(0x001EA5B0, app::Type__Array*, get_Constraints, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA5C0, app::GenericParameterAttributes__Enum, get_Attributes, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA5B0, app::Type__Array*, GetConstraints, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA5E0, int32_t, GetConstraintsCount, (app::RuntimeGenericParamInfoHandle__Boxed * this_ptr))
} // namespace app::classes::Mono::RuntimeGenericParamInfoHandle
