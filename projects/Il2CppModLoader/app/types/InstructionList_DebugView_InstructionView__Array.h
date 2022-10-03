#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstructionList_DebugView_InstructionView__Array {
        namespace {
            app::InstructionList_DebugView_InstructionView__Array__Class* type_info_ref = nullptr;
        }
        app::InstructionList_DebugView_InstructionView__Array__Class** type_info = &type_info_ref;
        inline app::InstructionList_DebugView_InstructionView__Array__Class* get_class() {
            return il2cpp::get_class<app::InstructionList_DebugView_InstructionView__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "InstructionList+DebugView+InstructionView[]");
        }
        inline app::InstructionList_DebugView_InstructionView__Array* create() {
            return il2cpp::create_object<app::InstructionList_DebugView_InstructionView__Array>(get_class());
        }
    } // namespace InstructionList_DebugView_InstructionView__Array
} // namespace app::classes::types
