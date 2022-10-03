#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions_TextureAnimationPair__Array {
        namespace {
            app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class* type_info_ref = nullptr;
        }
        app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class** type_info = &type_info_ref;
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class>(type_info, "", "TextureAnimationWithTransitions+TextureAnimationPair[]");
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Array* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions_TextureAnimationPair__Array>(get_class());
        }
    } // namespace TextureAnimationWithTransitions_TextureAnimationPair__Array
} // namespace app::classes::types
