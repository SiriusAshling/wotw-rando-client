#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_112 {
        namespace {
            app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112__Class* type_info_ref = nullptr;
        }
        app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112__Class>(type_info, "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=112");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_112__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_112
} // namespace app::classes::types
