#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::Constraints::EntityIdExtensions {
    IL2CPP_REGISTER_METHOD(0x01BB62A0, bool, IsParentOrNothing, (app::EntityId id))
    IL2CPP_REGISTER_METHOD(0x01BB62B0, app::IConstraint *, GetConstraint, (app::IConstrainedEntity * c_entity, app::Constraint__Enum constraint))
    IL2CPP_REGISTER_METHODINFO(0x04723C70, EntityIdExtensions_GetConstraint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BB63D0, bool, PointsToCustomEvent, (app::IConstraint * constraint))
    IL2CPP_REGISTER_METHOD(0x01BB6470, app::Constraint__Enum, GetTargetAction, (app::IConstraint * constraint))
    IL2CPP_REGISTER_METHODINFO(0x0474E708, EntityIdExtensions_GetTargetAction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BB6550, bool, EffectsParentLength, (app::IConstraint * constraint))
    IL2CPP_REGISTER_METHOD(0x01BB6640, bool, IsIndeterminedLength, (app::TimelineEntityRecord * record))
}