#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Profile::Utils {
    IL2CPP_REGISTER_METHOD(0x031598D0, app::MetricOutput__Array*, get_CurrentProfilerOutput, ())
    IL2CPP_REGISTER_METHOD(0x03159970, app::MetricOutput__Array*, _initFullProfilerOutput, ())
    IL2CPP_REGISTER_METHOD(0x03159AD0, void, cctor, ())
} // namespace app::classes::Moon::Profile::Utils
