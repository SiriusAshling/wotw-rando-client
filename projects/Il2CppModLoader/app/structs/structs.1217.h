namespace app {
    struct List_1_BuilderItem___StaticFields {
        struct BuilderItem__Array* _emptyArray;
    };

    struct List_1_BuilderItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_BuilderItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_BuilderItem___VTable vtable;
    };

    struct __declspec(align(8)) Dictionary_2_UnityEngine_KeyCode_System_String___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_UnityEngine_KeyCode_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_UnityEngine_KeyCode_System_String_ {
        struct Dictionary_2_UnityEngine_KeyCode_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_UnityEngine_KeyCode_System_String___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String_ {
        int32_t hashCode;
        int32_t next;
        KeyCode__Enum key;

        struct String* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array {
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String___Fields {
        struct Dictionary_2_UnityEngine_KeyCode_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String___Fields {
        struct Dictionary_2_UnityEngine_KeyCode_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String___Fields fields;
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String_ {
        KeyCode__Enum key;

        struct String* value;
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Boxed {
        struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_UnityEngine_KeyCode_System_String_ fields;
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Array {
        struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_UnityEngine_KeyCode_System_String_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_KeyCode_System_String_ {
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_KeyCode_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String___VTable vtable;
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String___StaticFields {
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_UnityEngine_KeyCode_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_UnityEngine_KeyCode_System_String___VTable vtable;
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Array__VTable {
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Array__StaticFields {
    };

    struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_UnityEngine_KeyCode_System_String___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_KeyCode_System_String___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_KeyCode_System_String___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_KeyCode_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_KeyCode_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_KeyCode_System_String___VTable vtable;
    };

    struct Dictionary_2_UnityEngine_KeyCode_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_UnityEngine_KeyCode_System_String___StaticFields {
    };

    struct Dictionary_2_UnityEngine_KeyCode_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_UnityEngine_KeyCode_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_UnityEngine_KeyCode_System_String___VTable vtable;
    };

    struct __declspec(align(8)) Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_SmartInput_XboxControllerInput_Button_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_ {
        struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String_ {
        int32_t hashCode;
        int32_t next;
        XboxControllerInput_Button__Enum key;

        struct String* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Array {
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String_ vector[32];
    };

    struct IEqualityComparer_1_SmartInput_XboxControllerInput_Button_ {
        struct IEqualityComparer_1_SmartInput_XboxControllerInput_Button___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String___Fields {
        struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String___Fields fields;
    };

    struct IEnumerator_1_SmartInput_XboxControllerInput_Button_ {
        struct IEnumerator_1_SmartInput_XboxControllerInput_Button___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String___Fields {
        struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String___Fields fields;
    };

    struct ICollection_1_SmartInput_XboxControllerInput_Button_ {
        struct ICollection_1_SmartInput_XboxControllerInput_Button___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String_ {
        XboxControllerInput_Button__Enum key;

        struct String* value;
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Boxed {
        struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String_ fields;
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Array {
        struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String_ {
        struct IEnumerator_1_KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_SmartInput_XboxControllerInput_Button_ {
        struct IEnumerable_1_SmartInput_XboxControllerInput_Button___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_SmartInput_XboxControllerInput_Button_System_String___Array__VTable vtable;
    };

    struct IEqualityComparer_1_SmartInput_XboxControllerInput_Button___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_SmartInput_XboxControllerInput_Button___StaticFields {
    };

    struct IEqualityComparer_1_SmartInput_XboxControllerInput_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_SmartInput_XboxControllerInput_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_SmartInput_XboxControllerInput_Button___VTable vtable;
    };

    struct IEnumerator_1_SmartInput_XboxControllerInput_Button___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SmartInput_XboxControllerInput_Button___StaticFields {
    };

    struct IEnumerator_1_SmartInput_XboxControllerInput_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SmartInput_XboxControllerInput_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SmartInput_XboxControllerInput_Button___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_XboxControllerInput_Button_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_XboxControllerInput_Button_System_String___VTable vtable;
    };

    struct ICollection_1_SmartInput_XboxControllerInput_Button___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_SmartInput_XboxControllerInput_Button___StaticFields {
    };

    struct ICollection_1_SmartInput_XboxControllerInput_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_SmartInput_XboxControllerInput_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_SmartInput_XboxControllerInput_Button___VTable vtable;
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___StaticFields {
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___VTable vtable;
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Array__VTable {
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Array__StaticFields {
    };

    struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_SmartInput_XboxControllerInput_Button_System_String___VTable vtable;
    };

    struct IEnumerable_1_SmartInput_XboxControllerInput_Button___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_SmartInput_XboxControllerInput_Button___StaticFields {
    };

    struct IEnumerable_1_SmartInput_XboxControllerInput_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_SmartInput_XboxControllerInput_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_SmartInput_XboxControllerInput_Button___VTable vtable;
    };

    struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___StaticFields {
    };

    struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___VTable vtable;
    };

    struct __declspec(align(8)) Dictionary_2_frameworks_Switch_Button_System_String___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_frameworks_Switch_Button_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_frameworks_Switch_Button_System_String_ {
        struct Dictionary_2_frameworks_Switch_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_frameworks_Switch_Button_System_String___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String_ {
        int32_t hashCode;
        int32_t next;
        Button__Enum key;

        struct String* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Array {
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String_ vector[32];
    };

    struct IEqualityComparer_1_frameworks_Switch_Button_ {
        struct IEqualityComparer_1_frameworks_Switch_Button___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String___Fields {
        struct Dictionary_2_frameworks_Switch_Button_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String___Fields fields;
    };

    struct Button__Enum__Array {
        struct Button__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        Button__Enum vector[32];
    };

    struct IEnumerator_1_frameworks_Switch_Button_ {
        struct IEnumerator_1_frameworks_Switch_Button___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String___Fields {
        struct Dictionary_2_frameworks_Switch_Button_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String___Fields fields;
    };

    struct ICollection_1_frameworks_Switch_Button_ {
        struct ICollection_1_frameworks_Switch_Button___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_frameworks_Switch_Button_System_String_ {
        Button__Enum key;

        struct String* value;
    };

    struct KeyValuePair_2_frameworks_Switch_Button_System_String___Boxed {
        struct KeyValuePair_2_frameworks_Switch_Button_System_String___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_frameworks_Switch_Button_System_String_ fields;
    };

    struct KeyValuePair_2_frameworks_Switch_Button_System_String___Array {
        struct KeyValuePair_2_frameworks_Switch_Button_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_frameworks_Switch_Button_System_String_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_frameworks_Switch_Button_System_String_ {
        struct IEnumerator_1_KeyValuePair_2_frameworks_Switch_Button_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_frameworks_Switch_Button_ {
        struct IEnumerable_1_frameworks_Switch_Button___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_frameworks_Switch_Button_System_String___Array__VTable vtable;
    };

    struct IEqualityComparer_1_frameworks_Switch_Button___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_frameworks_Switch_Button___StaticFields {
    };

    struct IEqualityComparer_1_frameworks_Switch_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_frameworks_Switch_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_frameworks_Switch_Button___VTable vtable;
    };

    struct Button__Enum__Array__VTable {
    };

    struct Button__Enum__Array__StaticFields {
    };

    struct Button__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Button__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Button__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_frameworks_Switch_Button___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_frameworks_Switch_Button___StaticFields {
    };

    struct IEnumerator_1_frameworks_Switch_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_frameworks_Switch_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_frameworks_Switch_Button___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_frameworks_Switch_Button_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_frameworks_Switch_Button_System_String___VTable vtable;
    };

    struct ICollection_1_frameworks_Switch_Button___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_frameworks_Switch_Button___StaticFields {
    };

    struct ICollection_1_frameworks_Switch_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_frameworks_Switch_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_frameworks_Switch_Button___VTable vtable;
    };

    struct KeyValuePair_2_frameworks_Switch_Button_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_frameworks_Switch_Button_System_String___StaticFields {
    };

    struct KeyValuePair_2_frameworks_Switch_Button_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_frameworks_Switch_Button_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_frameworks_Switch_Button_System_String___VTable vtable;
    };

} // namespace app
