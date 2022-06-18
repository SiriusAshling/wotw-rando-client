#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::DivInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::DivInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::DivInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DCE80, app::String *, get_InstructionName, (app::DivInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DivInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DCF00, app::Instruction *, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047076A8, DivInstruction_Create__MethodInfo)
}