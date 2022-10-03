#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::RuntimeMarshal {
    IL2CPP_REGISTER_METHOD(0x023CEA70, app::String*, PtrToUtf8String, (void* ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A0F8, RuntimeMarshal_PtrToUtf8String__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023CEB70, app::SafeStringMarshal, MarshalString, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x023CEB90, int32_t, DecodeBlobSize, (void* in_ptr, app::void** out_ptr))
    IL2CPP_REGISTER_METHOD(0x023CEBF0, app::Byte__Array*, DecodeBlobArray, (void* ptr))
    IL2CPP_REGISTER_METHOD(0x023CED20, int32_t, AsciHexDigitValue, (int32_t c))
    IL2CPP_REGISTER_METHOD(0x023CED40, void, FreeAssemblyName, (app::MonoAssemblyName * name, bool free_struct))
} // namespace app::classes::Mono::RuntimeMarshal
