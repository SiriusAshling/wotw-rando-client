#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_UInt32_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B3DD10, void, ctor, (app::ClassPropertyWriter_2_System_UInt32_System_Object_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B3A960, void, Write, (app::ClassPropertyWriter_2_System_UInt32_System_Object_ * this_ptr, app::TraceLoggingDataCollector * collector, uint32_t * container))
    IL2CPP_REGISTER_METHOD(0x02AD0670, app::Object *, GetData, (app::ClassPropertyWriter_2_System_UInt32_System_Object_ * this_ptr, uint32_t container))
}