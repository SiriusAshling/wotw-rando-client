#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumUInt64TypeInfo_1_System_SByte_ {
    IL2CPP_REGISTER_METHOD(0x02B97A10, void, WriteMetadata, (app::EnumUInt64TypeInfo_1_System_SByte_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B97AE0, void, WriteData, (app::EnumUInt64TypeInfo_1_System_SByte_ * this_ptr, app::TraceLoggingDataCollector * collector, int8_t * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumUInt64TypeInfo_1_System_SByte_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt64TypeInfo_1_System_SByte_ * this_ptr))
}