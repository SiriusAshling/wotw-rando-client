#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Int64_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3ABD0, void, ctor, (app::ClassPropertyWriter_2_System_Int64_System_Int32_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B3ADC0, void, Write, (app::ClassPropertyWriter_2_System_Int64_System_Int32_ * this_ptr, app::TraceLoggingDataCollector * collector, int64_t * container))
    IL2CPP_REGISTER_METHOD(0x02B37A40, app::Object *, GetData, (app::ClassPropertyWriter_2_System_Int64_System_Int32_ * this_ptr, int64_t container))
}