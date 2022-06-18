#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::Constraint {
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_ConstraintName, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D500, void, set_ConstraintName, (app::Constraint_1 * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04782228, Constraint_1_set_ConstraintName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0238D780, app::String *, get_SchemaName, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D7B0, void, set_SchemaName, (app::Constraint_1 * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_InCollection, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D7C0, void, set_InCollection, (app::Constraint_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0238D810, app::PropertyCollection *, get_ExtendedProperties, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D980, void, CheckConstraint, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726A18, Constraint_1_CheckConstraint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0238DA30, void, CheckStateForProperty, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780F20, Constraint_1_CheckStateForProperty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DataSet *, get__DataSet, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00980110, app::String *, ToString, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238DB70, void, ctor, (app::Constraint_1 * this_ptr))
}