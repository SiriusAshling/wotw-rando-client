#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_SByte_ {
    IL2CPP_REGISTER_METHOD(0x02876C40, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_SByte_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799190, TraceLoggingTypeInfo_1_System_SByte___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02876D10, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_SByte_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_SByte_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x028717C0, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_SByte_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02876E30, app::TraceLoggingTypeInfo_1_System_SByte_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02877020, app::TraceLoggingTypeInfo_1_System_SByte_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_SByte_
