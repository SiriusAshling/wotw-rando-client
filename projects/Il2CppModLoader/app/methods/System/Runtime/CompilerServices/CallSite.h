#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::CallSite {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CallSite * this_ptr, app::CallSiteBinder* binder))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::CallSiteBinder*, get_Binder, (app::CallSite * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::CallSite
