#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_20_4 {
        namespace {
            app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4__Class* type_info_ref = nullptr;
        }
        app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4__Class>(type_info, "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=20");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_20_4__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_20_4
} // namespace app::classes::types
