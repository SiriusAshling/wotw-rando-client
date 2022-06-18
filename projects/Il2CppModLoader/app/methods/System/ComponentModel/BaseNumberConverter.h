#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::BaseNumberConverter {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowHex, (app::BaseNumberConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A42A0, app::Exception *, FromStringError, (app::BaseNumberConverter * this_ptr, app::String * failed_text, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHOD(0x024A4510, bool, CanConvertFrom, (app::BaseNumberConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * source_type))
    IL2CPP_REGISTER_METHOD(0x024A45F0, app::Object *, ConvertFrom, (app::BaseNumberConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04748A30, BaseNumberConverter_ConvertFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A4950, app::Object *, ConvertTo, (app::BaseNumberConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0476C160, BaseNumberConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A4C20, bool, CanConvertTo, (app::BaseNumberConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * t))
    IL2CPP_REGISTER_METHOD(0x024A4C70, void, ctor, (app::BaseNumberConverter * this_ptr))
}