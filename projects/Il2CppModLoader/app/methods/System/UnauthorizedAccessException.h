#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::UnauthorizedAccessException {
    IL2CPP_REGISTER_METHOD(0x027C5B20, void, ctor_1, (app::UnauthorizedAccessException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C5BB0, void, ctor_2, (app::UnauthorizedAccessException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::UnauthorizedAccessException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::UnauthorizedAccessException
