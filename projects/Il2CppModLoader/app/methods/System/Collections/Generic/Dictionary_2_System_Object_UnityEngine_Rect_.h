#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02E188A0, void, ctor_4, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04769038, Dictionary_2_System_Object_UnityEngine_Rect___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::IDictionary_2_System_Object_UnityEngine_Rect_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02E189E0, void, ctor_6, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::IDictionary_2_System_Object_UnityEngine_Rect_* dictionary, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04734B50, Dictionary_2_System_Object_UnityEngine_Rect___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E18DC0, void, ctor_7, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_*, get_Comparer, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UnityEngine_Rect_*, get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Object_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Object_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_*, get_Values, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_UnityEngine_Rect_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_UnityEngine_Rect_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E18E90, app::Rect, get_Item, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x0471A668, Dictionary_2_System_Object_UnityEngine_Rect__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC57C0, void, set_Item, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x02BC5800, void, Add, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x02BC5840, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Rect_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BC5880, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Rect_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BC5980, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Rect_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02BC5AA0, bool, ContainsValue, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x02E18FB0, void, CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Rect___Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04723FE8, Dictionary_2_System_Object_UnityEngine_Rect__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283BD60, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect_, GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283BDB0, app::IEnumerator_1_KeyValuePair_2_System_Object_UnityEngine_Rect_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E191F0, void, GetObjectData, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047518A8, Dictionary_2_System_Object_UnityEngine_Rect__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E19430, int32_t, FindEntry, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x047425A0, Dictionary_2_System_Object_UnityEngine_Rect__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E196A0, void, Initialize, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02E19800, bool, TryInsert, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key, app::Rect value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x047579A0, Dictionary_2_System_Object_UnityEngine_Rect__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E19EA0, void, OnDeserialization, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x0478B3F8, Dictionary_2_System_Object_UnityEngine_Rect__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1A2F0, void, Resize_1, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E1A3C0, void, Resize_2, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02E1A690, bool, Remove, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04742FD0, Dictionary_2_System_Object_UnityEngine_Rect__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC76A0, bool, TryGetValue, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key, app::Rect* value))
    IL2CPP_REGISTER_METHOD(0x02BC7730, bool, TryAdd, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Rect___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02E1AAC0, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04767258, Dictionary_2_System_Object_UnityEngine_Rect__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283BDB0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E1B040, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC7E50, app::Object*, IDictionary_get_Item, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02E1B1A0, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04731828, Dictionary_2_System_Object_UnityEngine_Rect__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1B490, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04768EF0, Dictionary_2_System_Object_UnityEngine_Rect__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E1B590, void, IDictionary_Add, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04758CA8, Dictionary_2_System_Object_UnityEngine_Rect__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x0283E8F0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_UnityEngine_Rect_
