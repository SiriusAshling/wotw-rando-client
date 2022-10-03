#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ArithmeticException {
    IL2CPP_REGISTER_METHOD(0x02290D10, void, ctor_1, (app::ArithmeticException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02290DA0, void, ctor_2, (app::ArithmeticException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02290DC0, void, ctor_3, (app::ArithmeticException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, (app::ArithmeticException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::ArithmeticException
