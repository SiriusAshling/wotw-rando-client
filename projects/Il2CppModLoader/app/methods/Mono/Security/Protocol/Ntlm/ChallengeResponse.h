#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Ntlm::ChallengeResponse {
    IL2CPP_REGISTER_METHOD(0x02A48350, void, ctor_1, (app::ChallengeResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A483F0, void, ctor_2, (app::ChallengeResponse * this_ptr, app::String* password, app::Byte__Array* challenge))
    IL2CPP_REGISTER_METHOD(0x02A484C0, void, Finalize, (app::ChallengeResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A48620, void, set_Password, (app::ChallengeResponse * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04743990, ChallengeResponse_set_Password__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A48A30, void, set_Challenge, (app::ChallengeResponse * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHODINFO(0x04757750, ChallengeResponse_set_Challenge__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A48BF0, app::Byte__Array*, get_LM, (app::ChallengeResponse * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472FCC0, ChallengeResponse_get_LM__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A48CB0, app::Byte__Array*, get_NT, (app::ChallengeResponse * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477FC40, ChallengeResponse_get_NT__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A48D70, void, Dispose_1, (app::ChallengeResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A48E70, void, Dispose_2, (app::ChallengeResponse * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02A48EE0, app::Byte__Array*, GetResponse, (app::ChallengeResponse * this_ptr, app::Byte__Array* pwd))
    IL2CPP_REGISTER_METHOD(0x02A49130, app::Byte__Array*, PrepareDESKey, (app::ChallengeResponse * this_ptr, app::Byte__Array* key56bits, int32_t position))
    IL2CPP_REGISTER_METHOD(0x02A49510, app::Byte__Array*, PasswordToKey, (app::ChallengeResponse * this_ptr, app::String* password, int32_t position))
    IL2CPP_REGISTER_METHOD(0x02A496D0, void, cctor, ())
} // namespace app::classes::Mono::Security::Protocol::Ntlm::ChallengeResponse
