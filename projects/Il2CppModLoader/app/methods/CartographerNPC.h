#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CartographerNPC {
    IL2CPP_REGISTER_METHOD(0x00B41E60, int32_t, get_CurrentState, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B41E70, bool, get_IsInInteractionRange, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B41F40, bool, get_OriIsFacingUs, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B420E0, void, FindWorldArea, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B42290, void, Start, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B42320, void, Awake, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B42820, void, ChangeState, (app::CartographerNPC * this_ptr, app::CartographerNPC_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00B42840, void, FixedUpdate, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B43040, void, OnEnterIdle, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B43060, void, UpdateIdle, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitIdle, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B436C0, void, OnEnterMoveOriToPosition, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMoveOriToPosition, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B43A50, void, OnExitMoveOriToPosition, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B43CF0, void, OnEnterPurchase, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B43F80, void, UpdatePurchase, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B44030, void, OnExitPurchase, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B44290, void, OnInteractionMessageHide, (app::CartographerNPC * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x04772670, CartographerNPC_OnInteractionMessageHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B44600, void, OnNotEnoughMessageHide, (app::CartographerNPC * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x04767820, CartographerNPC_OnNotEnoughMessageHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B447B0, void, PlayTimeline, (app::CartographerNPC * this_ptr, app::MoonTimeline* left, app::MoonTimeline* right))
    IL2CPP_REGISTER_METHOD(0x00B448F0, void, OnConfirmationSelected, (app::CartographerNPC * this_ptr, app::BuyMapUIConfirmationOverlay_Selection__Enum selection))
    IL2CPP_REGISTER_METHODINFO(0x04798F40, CartographerNPC_OnConfirmationSelected__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B44CD0, void, OnEnterGiveMap, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B45280, void, UpdateGiveMap, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B454A0, void, OnGiveMapTimelineStop, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F028, CartographerNPC_OnGiveMapTimelineStop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B455E0, void, OnExitGiveMap, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B45AA0, void, OnEnterDidNotBuy, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateDidNotBuy, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B45CE0, void, OnExitDidNotBuy, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B45F00, void, OnAfterMapBuyMessageHide, (app::CartographerNPC * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x047181B8, CartographerNPC_OnAfterMapBuyMessageHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B45F00, void, ChangeStateToIdle, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B45F10, void, OnEnterAfterMapBuy, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAfterMapBuy, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B46150, void, OnExitAfterMapBuy, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B45F00, void, OnDidNotBuyMessageHide, (app::CartographerNPC * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x04794458, CartographerNPC_OnDidNotBuyMessageHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B46370, void, OnEnterAlternateInteration, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAlternateInteration, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B46770, void, OnExitAlternateInteration, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B45F00, void, OnAlternateInterrctionMessageHide, (app::CartographerNPC * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x0473B230, CartographerNPC_OnAlternateInterrctionMessageHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B46990, void, ctor, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B469C0, void, _OnInteractionMessageHide_b__68_0, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047268A8, CartographerNPC__OnInteractionMessageHide_b__68_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B47100, void, _OnInteractionMessageHide_b__68_1, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776550, CartographerNPC__OnInteractionMessageHide_b__68_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B471D0, void, _OnEnterGiveMap_b__72_0, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047375E0, CartographerNPC__OnEnterGiveMap_b__72_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_1, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_2, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_3, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_4, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_5, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_6, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_7, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_8, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_9, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_10, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_11, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_12, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_13, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_14, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_15, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_16, (app::CartographerNPC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B2A190, app::IMoonTypeResolver*, GetResolverForType_17, (app::CartographerNPC * this_ptr))
} // namespace app::classes::CartographerNPC
