#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ElectricSlugDamageDealer {
    IL2CPP_REGISTER_METHOD(0x00BF8710, void, ApplyDamageToCollider, (app::ElectricSlugDamageDealer * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00BF8970, void, ctor, (app::ElectricSlugDamageDealer * this_ptr))
} // namespace app::classes::ElectricSlugDamageDealer
