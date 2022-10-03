#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0249FDA0, void, ctor, (app::ArrayConverter_ArrayPropertyDescriptor * this_ptr, app::Type* array_type, app::Type* element_type, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0249FE90, app::Object*, GetValue, (app::ArrayConverter_ArrayPropertyDescriptor * this_ptr, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x0249FFF0, void, SetValue, (app::ArrayConverter_ArrayPropertyDescriptor * this_ptr, app::Object* instance, app::Object* value))
} // namespace app::classes::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor
