#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ByRefUpdater {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::ByRefUpdater * this_ptr, int32_t argument_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UndefineTemps, (app::ByRefUpdater * this_ptr, app::InstructionList* instructions, app::LocalVariables* locals))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ByRefUpdater
