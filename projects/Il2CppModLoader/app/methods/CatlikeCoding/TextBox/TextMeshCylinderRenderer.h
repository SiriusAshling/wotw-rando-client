#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CatlikeCoding::TextBox::TextMeshCylinderRenderer {
    IL2CPP_REGISTER_METHOD(0x01036B70, void, Prepare, (app::TextMeshCylinderRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01036CE0, void, Add, (app::TextMeshCylinderRenderer * this_ptr, app::CharMetaData meta, app::Vector2 offset, int32_t index))
    IL2CPP_REGISTER_METHOD(0x010373D0, void, ctor, (app::TextMeshCylinderRenderer * this_ptr))
} // namespace app::classes::CatlikeCoding::TextBox::TextMeshCylinderRenderer
