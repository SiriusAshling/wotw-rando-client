#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Metadata::SoapAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SoapAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_UseAttribute, (app::SoapAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_XmlNamespace, (app::SoapAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, SetReflectionObject, (app::SoapAttribute * this_ptr, app::Object * reflection_object))
}