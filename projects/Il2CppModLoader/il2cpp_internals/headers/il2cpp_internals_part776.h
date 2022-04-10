namespace app {
struct DamagerAnimator__StaticFields {
  struct Collider__Array * colliders;
};
struct DamagerAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamagerAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamagerAnimator__VTable vtable;
};

struct DisplacementWaveAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct Transform * WaveSource;
  struct UberWaterControl * WaterControl;
  float WaveForce;
  float WaveRadius;
  bool m_hasPlayed;
};
struct DisplacementWaveAnimator {
  struct DisplacementWaveAnimator__Class *klass;
  struct MonitorData *monitor;
  struct DisplacementWaveAnimator__Fields fields;
};
struct DisplacementWaveAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct DisplacementWaveAnimator__StaticFields {
};
struct DisplacementWaveAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisplacementWaveAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisplacementWaveAnimator__VTable vtable;
};

struct DistortionAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * StrengthCurve;
  struct List_1_DistortionAnimator_RendererData_ * m_rendererData;
};
struct DistortionAnimator {
  struct DistortionAnimator__Class *klass;
  struct MonitorData *monitor;
  struct DistortionAnimator__Fields fields;
};
struct __declspec(align(8)) List_1_DistortionAnimator_RendererData___Fields {
  struct DistortionAnimator_RendererData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DistortionAnimator_RendererData_ {
  struct List_1_DistortionAnimator_RendererData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DistortionAnimator_RendererData___Fields fields;
};
struct DistortionAnimator_RendererData {
  struct List_1_UberShaderProperty_Vector_ * m_propertiesEnums;
  struct List_1_DistortionAnimator_RendererData_Property_ * m_properties;
  struct Renderer * Renderer;
};
struct DistortionAnimator_RendererData__Boxed {
  struct DistortionAnimator_RendererData__Class *klass;
  struct MonitorData *monitor;
  struct DistortionAnimator_RendererData fields;
};
struct DistortionAnimator_RendererData__Array {
  struct DistortionAnimator_RendererData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DistortionAnimator_RendererData vector[32];
};
struct __declspec(align(8)) List_1_UberShaderProperty_Vector___Fields {
  struct UberShaderProperty_Vector__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberShaderProperty_Vector_ {
  struct List_1_UberShaderProperty_Vector___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberShaderProperty_Vector___Fields fields;
};
struct UberShaderProperty_Vector__Enum__Array {
  struct UberShaderProperty_Vector__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum UberShaderProperty_Vector__Enum vector[32];
};
struct IEnumerator_1_UberShaderProperty_Vector_ {
  struct IEnumerator_1_UberShaderProperty_Vector___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_DistortionAnimator_RendererData_Property___Fields {
  struct DistortionAnimator_RendererData_Property__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DistortionAnimator_RendererData_Property_ {
  struct List_1_DistortionAnimator_RendererData_Property___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DistortionAnimator_RendererData_Property___Fields fields;
};
struct DistortionAnimator_RendererData_Property {
  enum UberShaderProperty_Vector__Enum PropertyEnum;
  struct Vector4 OriginalValue;
};
struct DistortionAnimator_RendererData_Property__Boxed {
  struct DistortionAnimator_RendererData_Property__Class *klass;
  struct MonitorData *monitor;
  struct DistortionAnimator_RendererData_Property fields;
};
struct DistortionAnimator_RendererData_Property__Array {
  struct DistortionAnimator_RendererData_Property__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DistortionAnimator_RendererData_Property vector[32];
};
struct IEnumerator_1_DistortionAnimator_RendererData_Property_ {
  struct IEnumerator_1_DistortionAnimator_RendererData_Property___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_DistortionAnimator_RendererData_ {
  struct IEnumerator_1_DistortionAnimator_RendererData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UberShaderProperty_Vector___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberShaderProperty_Vector___StaticFields {
};
struct IEnumerator_1_UberShaderProperty_Vector___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberShaderProperty_Vector___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberShaderProperty_Vector___VTable vtable;
};
struct List_1_UberShaderProperty_Vector___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UberShaderProperty_Vector___StaticFields {
  struct UberShaderProperty_Vector__Enum__Array * _emptyArray;
};
struct List_1_UberShaderProperty_Vector___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberShaderProperty_Vector___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberShaderProperty_Vector___VTable vtable;
};
struct DistortionAnimator_RendererData_Property__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DistortionAnimator_RendererData_Property__StaticFields {
};
struct DistortionAnimator_RendererData_Property__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DistortionAnimator_RendererData_Property__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DistortionAnimator_RendererData_Property__VTable vtable;
};
struct IEnumerator_1_DistortionAnimator_RendererData_Property___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DistortionAnimator_RendererData_Property___StaticFields {
};
struct IEnumerator_1_DistortionAnimator_RendererData_Property___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DistortionAnimator_RendererData_Property___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DistortionAnimator_RendererData_Property___VTable vtable;
};
struct List_1_DistortionAnimator_RendererData_Property___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_DistortionAnimator_RendererData_Property___StaticFields {
  struct DistortionAnimator_RendererData_Property__Array * _emptyArray;
};
struct List_1_DistortionAnimator_RendererData_Property___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DistortionAnimator_RendererData_Property___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DistortionAnimator_RendererData_Property___VTable vtable;
};
struct DistortionAnimator_RendererData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DistortionAnimator_RendererData__StaticFields {
};
struct DistortionAnimator_RendererData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DistortionAnimator_RendererData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DistortionAnimator_RendererData__VTable vtable;
};
struct IEnumerator_1_DistortionAnimator_RendererData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DistortionAnimator_RendererData___StaticFields {
};
struct IEnumerator_1_DistortionAnimator_RendererData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DistortionAnimator_RendererData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DistortionAnimator_RendererData___VTable vtable;
};
struct List_1_DistortionAnimator_RendererData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_DistortionAnimator_RendererData___StaticFields {
  struct DistortionAnimator_RendererData__Array * _emptyArray;
};
struct List_1_DistortionAnimator_RendererData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DistortionAnimator_RendererData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DistortionAnimator_RendererData___VTable vtable;
};
struct DistortionAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct DistortionAnimator__StaticFields {
};
struct DistortionAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DistortionAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DistortionAnimator__VTable vtable;
};

struct DofAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * WeightCurve;
  struct AnimationCurve * DofCurve;
  int32_t priority;
};
struct DofAnimator {
  struct DofAnimator__Class *klass;
  struct MonitorData *monitor;
  struct DofAnimator__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_DofAnimator_System_Single___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_DofAnimator_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_DofAnimator_System_Single_ {
  struct Dictionary_2_DofAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_DofAnimator_System_Single___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single_ {
  int32_t hashCode;
  int32_t next;
  struct DofAnimator * key;
  float value;
};
struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___Array {
  struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single_ vector[32];
};
struct IEqualityComparer_1_DofAnimator_ {
  struct IEqualityComparer_1_DofAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single___Fields {
  struct Dictionary_2_DofAnimator_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single___Fields fields;
};
struct DofAnimator__Array {
  struct DofAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DofAnimator * vector[32];
};
struct IEnumerator_1_DofAnimator_ {
  struct IEnumerator_1_DofAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single___Fields {
  struct Dictionary_2_DofAnimator_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single___Fields fields;
};
struct ICollection_1_DofAnimator_ {
  struct ICollection_1_DofAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_DofAnimator_System_Single_ {
  struct DofAnimator * key;
  float value;
};
struct KeyValuePair_2_DofAnimator_System_Single___Boxed {
  struct KeyValuePair_2_DofAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_DofAnimator_System_Single_ fields;
};
struct KeyValuePair_2_DofAnimator_System_Single___Array {
  struct KeyValuePair_2_DofAnimator_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_DofAnimator_System_Single_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_DofAnimator_System_Single_ {
  struct IEnumerator_1_KeyValuePair_2_DofAnimator_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_DofAnimator_ {
  struct IEnumerable_1_DofAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_DofAnimator_System_Single___VTable vtable;
};
struct IEqualityComparer_1_DofAnimator___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_DofAnimator___StaticFields {
};
struct IEqualityComparer_1_DofAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_DofAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_DofAnimator___VTable vtable;
};
struct IEnumerator_1_DofAnimator___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DofAnimator___StaticFields {
};
struct IEnumerator_1_DofAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DofAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DofAnimator___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_DofAnimator_System_Single___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_DofAnimator_System_Single___VTable vtable;
};
struct ICollection_1_DofAnimator___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_DofAnimator___StaticFields {
};
struct ICollection_1_DofAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_DofAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_DofAnimator___VTable vtable;
};
struct KeyValuePair_2_DofAnimator_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_DofAnimator_System_Single___StaticFields {
};
struct KeyValuePair_2_DofAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_DofAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_DofAnimator_System_Single___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_DofAnimator_System_Single___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_DofAnimator_System_Single___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_DofAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_DofAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_DofAnimator_System_Single___VTable vtable;
};
struct IEnumerable_1_DofAnimator___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_DofAnimator___StaticFields {
};
struct IEnumerable_1_DofAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_DofAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_DofAnimator___VTable vtable;
};
struct Dictionary_2_DofAnimator_System_Single___VTable {
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
struct Dictionary_2_DofAnimator_System_Single___StaticFields {
};
struct Dictionary_2_DofAnimator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_DofAnimator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_DofAnimator_System_Single___VTable vtable;
};
struct DofAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct DofAnimator__StaticFields {
  struct Dictionary_2_DofAnimator_System_Single_ * m_dofAnimators;
  float weightScale;
  float weightLeft;
};
struct DofAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DofAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DofAnimator__VTable vtable;
};

struct EulerRotationAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * X;
  struct AnimationCurve * Y;
  struct AnimationCurve * Z;
  struct Transform * ExternalTransform;
  struct Vector3 m_originalEulerAngles;
};
struct EulerRotationAnimator {
  struct EulerRotationAnimator__Class *klass;
  struct MonitorData *monitor;
  struct EulerRotationAnimator__Fields fields;
};
struct EulerRotationAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct EulerRotationAnimator__StaticFields {
};
struct EulerRotationAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EulerRotationAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EulerRotationAnimator__VTable vtable;
};

struct FaderAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * FaderAnimationCurve;
};
struct FaderAnimator {
  struct FaderAnimator__Class *klass;
  struct MonitorData *monitor;
  struct FaderAnimator__Fields fields;
};
struct FaderAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct FaderAnimator__StaticFields {
};
struct FaderAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FaderAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FaderAnimator__VTable vtable;
};

struct GameplayToCinematicAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * AnimationCurve;
  struct CameraPuppetController * m_puppet;
  struct WideScreenAdjustmentSettings * WideScreenAdjustment;
  struct FloatProviderZone__Array * AnimationZones;
  struct Transform * StartingPuppetLocation;
};
struct GameplayToCinematicAnimator {
  struct GameplayToCinematicAnimator__Class *klass;
  struct MonitorData *monitor;
  struct GameplayToCinematicAnimator__Fields fields;
};
struct GameplayToCinematicAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct GameplayToCinematicAnimator__StaticFields {
};
struct GameplayToCinematicAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameplayToCinematicAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameplayToCinematicAnimator__VTable vtable;
};

struct GlobalTurbulenceMaskAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * ActiveMask;
  struct AnimationCurve * Power;
  struct AnimationCurve * RotationBias;
  struct AnimationCurve * ScaleBias;
  struct AnimationCurve * RotationMultiplier;
  struct AnimationCurve * ScaleMultiplier;
  struct SceneSettingsComponent * m_sceneComponent;
  float OriginalActiveRenderer;
  float OriginalGlobalTurbulenceMapPower;
  float OriginalRotationBias;
  float OriginalScaleBias;
  float OriginalRotationMultiplier;
  float OriginalScaleMultiplier;
};