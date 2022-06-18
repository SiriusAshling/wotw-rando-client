#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr, app::IComNativeDescriptorHandler * handler, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x02956880, app::AttributeCollection *, ICustomTypeDescriptor_GetAttributes, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02956980, app::String *, ICustomTypeDescriptor_GetClassName, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, ICustomTypeDescriptor_GetComponentName, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02956A20, app::TypeConverter *, ICustomTypeDescriptor_GetConverter, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02956B30, app::EventDescriptor_1 *, ICustomTypeDescriptor_GetDefaultEvent, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02956C40, app::PropertyDescriptor *, ICustomTypeDescriptor_GetDefaultProperty, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02956D50, app::Object *, ICustomTypeDescriptor_GetEditor, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr, app::Type * editor_base_type))
    IL2CPP_REGISTER_METHOD(0x02956E00, app::EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents_1, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02956F10, app::EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents_2, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr, app::Attribute__Array * attributes))
    IL2CPP_REGISTER_METHOD(0x02957030, app::PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties_1, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029570D0, app::PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties_2, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr, app::Attribute__Array * attributes))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object *, ICustomTypeDescriptor_GetPropertyOwner, (app::TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor * this_ptr, app::PropertyDescriptor * pd))
}