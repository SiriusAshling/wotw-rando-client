#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::UInt16ArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A0E670, void, WriteMetadata, (app::UInt16ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A0E740, void, WriteData, (app::UInt16ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::UInt16__Array** value))
    IL2CPP_REGISTER_METHOD(0x01A0E860, void, ctor, (app::UInt16ArrayTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::UInt16ArrayTypeInfo
