#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberShaderCategoryManager {
    IL2CPP_REGISTER_METHOD(0x0190C930, app::Color, GetCategoryColor, (app::UberShaderCategory__Enum category))
    IL2CPP_REGISTER_METHOD(0x0190CA10, void, cctor, ())
} // namespace app::classes::UberShaderCategoryManager
