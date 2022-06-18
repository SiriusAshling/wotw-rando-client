#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::ValueTypeFixupInfo {
    IL2CPP_REGISTER_METHOD(0x01EE1F40, void, ctor, (app::ValueTypeFixupInfo * this_ptr, int64_t container_i_d, app::FieldInfo_1 * member, app::Int32__Array * parent_index))
    IL2CPP_REGISTER_METHODINFO(0x04765610, ValueTypeFixupInfo__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, int64_t, get_ContainerID, (app::ValueTypeFixupInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::FieldInfo_1 *, get_ParentField, (app::ValueTypeFixupInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Int32__Array *, get_ParentIndex, (app::ValueTypeFixupInfo * this_ptr))
}