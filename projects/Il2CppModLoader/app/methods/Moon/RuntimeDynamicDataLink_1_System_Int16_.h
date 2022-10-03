#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::RuntimeDynamicDataLink_1_System_Int16_ {
    IL2CPP_REGISTER_METHOD(0x0290BD90, bool, Init, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr, app::DynamicDataLinkSerializedData data, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x0290C070, bool, get_IsValid, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object_1*, get_TargetObject, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MemberInfo_1*, get_TargetMemberInfo, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Type*, get_ReturnedValueType, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0290C1F0, int16_t, GetValue, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047260E8, RuntimeDynamicDataLink_1_System_Int16__GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0290C4D0, bool, IsLinkForObjectAndMemberInfoCombo, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr, app::Object_1* target_object, app::MemberInfo_1* target_member_info))
    IL2CPP_REGISTER_METHOD(0x01CE2FF0, app::DynamicDataLinkSerializedData, GetSerializedData, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0290C660, void, CreateReflectionData, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHODINFO(0x04712818, RuntimeDynamicDataLink_1_System_Int16__CreateReflectionData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0290CAE0, app::String*, ToString, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::RuntimeDynamicDataLink_1_System_Int16_ * this_ptr))
} // namespace app::classes::Moon::RuntimeDynamicDataLink_1_System_Int16_
