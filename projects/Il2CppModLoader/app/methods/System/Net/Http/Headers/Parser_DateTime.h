#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::Parser_DateTime {
    IL2CPP_REGISTER_METHOD(0x02D12070, bool, TryParse, (app::String * input, app::DateTimeOffset * result))
    IL2CPP_REGISTER_METHODINFO(0x0472A940, Parser_DateTime_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D12120, void, cctor, ())
}