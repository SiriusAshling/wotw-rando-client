#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DialogGraph_MessageFinishedCondition {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DialogGraph_MessageFinishedCondition * this_ptr, app::DialogGraph* graph))
    IL2CPP_REGISTER_METHOD(0x00B90030, bool, Validate, (app::DialogGraph_MessageFinishedCondition * this_ptr, app::IContext* context))
} // namespace app::classes::DialogGraph_MessageFinishedCondition
