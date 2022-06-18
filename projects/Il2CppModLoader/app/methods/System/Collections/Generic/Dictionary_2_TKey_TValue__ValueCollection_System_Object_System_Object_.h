#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TValue__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C07F0, app::Object *, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026BFFC0, void, ctor, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Dictionary_2_System_Object_System_Object_ * dictionary))
    IL2CPP_REGISTER_METHODINFO(0x04719188, Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A729A0, app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_, GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C0090, void, CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Object__Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047635B8, Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026C02C0, void, System_Collections_Generic_ICollection_TValue__Add, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHODINFO(0x04737D90, Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object__System_Collections_Generic_ICollection_TValue__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026C0320, bool, System_Collections_Generic_ICollection_TValue__Remove, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHODINFO(0x04760B58, Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object__System_Collections_Generic_ICollection_TValue__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026C0380, void, System_Collections_Generic_ICollection_TValue__Clear, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D1F8, Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object__System_Collections_Generic_ICollection_TValue__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72D00, bool, System_Collections_Generic_ICollection_TValue__Contains, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x01A72D90, app::IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_TValue__GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A72D90, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C03E0, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04758E88, Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object__System_Collections_ICollection_CopyTo__MethodInfo)
}