namespace app {
struct RestoreHealthAction {
  struct RestoreHealthAction__Class *klass;
  struct MonitorData *monitor;
  struct RestoreHealthAction__Fields fields;
};
struct RestoreHealthAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct RestoreHealthAction__StaticFields {
};
struct RestoreHealthAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RestoreHealthAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RestoreHealthAction__VTable vtable;
};

struct RunLastSkillEarntAction__Fields {
  struct ActionMethod__Fields _;
};
struct RunLastSkillEarntAction {
  struct RunLastSkillEarntAction__Class *klass;
  struct MonitorData *monitor;
  struct RunLastSkillEarntAction__Fields fields;
};
struct RunLastSkillEarntAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct RunLastSkillEarntAction__StaticFields {
};
struct RunLastSkillEarntAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RunLastSkillEarntAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RunLastSkillEarntAction__VTable vtable;
};

struct SkillTreeAction__Fields {
  struct ActionMethod__Fields _;
};
struct SkillTreeAction {
  struct SkillTreeAction__Class *klass;
  struct MonitorData *monitor;
  struct SkillTreeAction__Fields fields;
};
struct SkillTreeAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct SkillTreeAction__StaticFields {
};
struct SkillTreeAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkillTreeAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkillTreeAction__VTable vtable;
};

enum SceneWarning_MessageMode__Enum : int32_t {
  SceneWarning_MessageMode__Enum_Message = 0,
  SceneWarning_MessageMode__Enum_Warning = 1,
  SceneWarning_MessageMode__Enum_Error = 2,
};
struct SceneWarning_MessageMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SceneWarning_MessageMode__Enum value;
};
struct SceneWarning__Fields {
  struct MonoBehaviour__Fields _;
  struct String * Message;
  enum SceneWarning_MessageMode__Enum Mode;
};
struct SceneWarning {
  struct SceneWarning__Class *klass;
  struct MonitorData *monitor;
  struct SceneWarning__Fields fields;
};
struct SceneWarning__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneWarning__StaticFields {
};
struct SceneWarning__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneWarning__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneWarning__VTable vtable;
};

struct AutoScrollTexture__Fields {
  struct Suspendable__Fields _;
  struct Renderer * TargetRenderer;
  struct Vector2 Speed;
  struct AnimationCurve * Curve;
  bool UseCurve;
  struct Condition_1 * Condition;
  struct Vector2 m_shift;
  struct Vector3 m_intialPosition;
  struct Material * m_material;
  int32_t m_textureID;
  bool _IsSuspended_k__BackingField;
};
struct AutoScrollTexture {
  struct AutoScrollTexture__Class *klass;
  struct MonitorData *monitor;
  struct AutoScrollTexture__Fields fields;
};
struct AutoScrollTexture__VTable {
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
};
struct AutoScrollTexture__StaticFields {
};
struct AutoScrollTexture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoScrollTexture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoScrollTexture__VTable vtable;
};

struct PassiveSetupInfo__Fields {
  struct MonoBehaviour__Fields _;
  struct NewSetupStateController * PassiveSetupStateController;
  struct MoonTimeline * Transition01;
  struct MoonTimeline * Transition10;
};
struct PassiveSetupInfo {
  struct PassiveSetupInfo__Class *klass;
  struct MonitorData *monitor;
  struct PassiveSetupInfo__Fields fields;
};
struct PassiveSetupInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PassiveSetupInfo__StaticFields {
};
struct PassiveSetupInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PassiveSetupInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PassiveSetupInfo__VTable vtable;
};

enum PassiveSetupInfo_State__Enum : int32_t {
  PassiveSetupInfo_State__Enum_zero = 0,
  PassiveSetupInfo_State__Enum_one = 1,
};
struct PassiveSetupInfo_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PassiveSetupInfo_State__Enum value;
};

struct ShrineCombat__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageProvider * PressButtonToStartMessage;
  float InteractionRadius;
  struct EnemyArenaController * ArenaController;
  struct GameObject * RewardsParent;
  struct CollectablePlaceholder * m_collectablePlaceholder;
  struct CageStructureTool * AllowedArea;
  struct MoonTimeline * OnCombatStartedTimeline;
  struct MoonTimeline * OnCombatCompletedFirstTimeTimeline;
  struct MoonTimeline * OnCombatCompletedReplayTimeline;
  struct State * CombatStartState;
  struct State * CombatEndState;
  struct List_1_ShrineCombat_WaveProgressMarker_ * WaveProgressMarkers;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
  struct StateMachine_2 * m_stateMachine;
  struct ShrineCombat_States * m_states;
  struct MessageBox * m_pressToStartHint;
  struct IUberState__Array * m_affectingUberStates;
  struct Dictionary_2_System_Int32_System_String_ * m_conditionNameMap;
};
struct ShrineCombat {
  struct ShrineCombat__Class *klass;
  struct MonitorData *monitor;
  struct ShrineCombat__Fields fields;
};
struct __declspec(align(8)) List_1_ShrineCombat___Fields {
  struct ShrineCombat__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ShrineCombat_ {
  struct List_1_ShrineCombat___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ShrineCombat___Fields fields;
};
struct ShrineCombat__Array {
  struct ShrineCombat__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ShrineCombat * vector[32];
};
struct IEnumerator_1_ShrineCombat_ {
  struct IEnumerator_1_ShrineCombat___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ShrineCombat_WaveProgressMarker___Fields {
  struct ShrineCombat_WaveProgressMarker__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ShrineCombat_WaveProgressMarker_ {
  struct List_1_ShrineCombat_WaveProgressMarker___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ShrineCombat_WaveProgressMarker___Fields fields;
};
struct __declspec(align(8)) ShrineCombat_WaveProgressMarker__Fields {
  struct EventTriggerAnimator * EventTrigger;
  struct PassiveSetupInfo * Marker;
  bool StayOnWhenReplayTriggered;
};
struct ShrineCombat_WaveProgressMarker {
  struct ShrineCombat_WaveProgressMarker__Class *klass;
  struct MonitorData *monitor;
  struct ShrineCombat_WaveProgressMarker__Fields fields;
};
struct ShrineCombat_WaveProgressMarker__Array {
  struct ShrineCombat_WaveProgressMarker__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ShrineCombat_WaveProgressMarker * vector[32];
};
struct IEnumerator_1_ShrineCombat_WaveProgressMarker_ {
  struct IEnumerator_1_ShrineCombat_WaveProgressMarker___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ShrineCombat_States__Fields {
  struct ShrineCombat_ShrineCombatState * Idle;
  struct ShrineCombat_ShrineCombatState * Running;
};
struct ShrineCombat_States {
  struct ShrineCombat_States__Class *klass;
  struct MonitorData *monitor;
  struct ShrineCombat_States__Fields fields;
};
struct __declspec(align(8)) ShrineCombat_ShrineCombatState__Fields {
  struct ShrineCombat * m_shrineCombat;
  struct StateMachine_2 * m_stateMachine;
  struct ShrineCombat_States * m_states;
  float m_stateTime;
};
struct ShrineCombat_ShrineCombatState {
  struct ShrineCombat_ShrineCombatState__Class *klass;
  struct MonitorData *monitor;
  struct ShrineCombat_ShrineCombatState__Fields fields;
};
struct IEnumerator_1_ShrineCombat___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ShrineCombat___StaticFields {
};
struct IEnumerator_1_ShrineCombat___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ShrineCombat___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ShrineCombat___VTable vtable;
};
struct List_1_ShrineCombat___VTable {
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
struct List_1_ShrineCombat___StaticFields {
  struct ShrineCombat__Array * _emptyArray;
};
struct List_1_ShrineCombat___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ShrineCombat___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ShrineCombat___VTable vtable;
};
struct ShrineCombat_WaveProgressMarker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShrineCombat_WaveProgressMarker__StaticFields {
};
struct ShrineCombat_WaveProgressMarker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShrineCombat_WaveProgressMarker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShrineCombat_WaveProgressMarker__VTable vtable;
};
struct IEnumerator_1_ShrineCombat_WaveProgressMarker___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ShrineCombat_WaveProgressMarker___StaticFields {
};
struct IEnumerator_1_ShrineCombat_WaveProgressMarker___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ShrineCombat_WaveProgressMarker___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ShrineCombat_WaveProgressMarker___VTable vtable;
};
struct List_1_ShrineCombat_WaveProgressMarker___VTable {
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
struct List_1_ShrineCombat_WaveProgressMarker___StaticFields {
  struct ShrineCombat_WaveProgressMarker__Array * _emptyArray;
};
struct List_1_ShrineCombat_WaveProgressMarker___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ShrineCombat_WaveProgressMarker___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ShrineCombat_WaveProgressMarker___VTable vtable;
};
struct ShrineCombat_ShrineCombatState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData OnSuspended;
  VirtualInvokeData OnUnsuspended;
};
struct ShrineCombat_ShrineCombatState__StaticFields {
};
struct ShrineCombat_ShrineCombatState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShrineCombat_ShrineCombatState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShrineCombat_ShrineCombatState__VTable vtable;
};
struct ShrineCombat_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShrineCombat_States__StaticFields {
};
struct ShrineCombat_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShrineCombat_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShrineCombat_States__VTable vtable;
};
struct ShrineCombat__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData GetAllConditionNames;
  VirtualInvokeData GetAllConditionGuids;
  VirtualInvokeData GetConditionNameFromGuid;
  VirtualInvokeData IsConditionGuidValid;
  VirtualInvokeData Validate;
  VirtualInvokeData OnPostTimeSlicedEnable;
};
struct ShrineCombat__StaticFields {
  struct List_1_ShrineCombat_ * AllShrines;
};
struct ShrineCombat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShrineCombat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShrineCombat__VTable vtable;
};

struct Func_2_ShrineCombat_WaveProgressMarker_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_ShrineCombat_WaveProgressMarker_Boolean_ {
  struct Func_2_ShrineCombat_WaveProgressMarker_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_ShrineCombat_WaveProgressMarker_Boolean___Fields fields;
};
struct Func_2_ShrineCombat_WaveProgressMarker_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct Func_2_ShrineCombat_WaveProgressMarker_Boolean___StaticFields {
};
struct Func_2_ShrineCombat_WaveProgressMarker_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_ShrineCombat_WaveProgressMarker_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_ShrineCombat_WaveProgressMarker_Boolean___VTable vtable;
};

struct ShrineCombat_IdleState__Fields {
  struct ShrineCombat_ShrineCombatState__Fields _;
};
struct ShrineCombat_IdleState {
  struct ShrineCombat_IdleState__Class *klass;
  struct MonitorData *monitor;
  struct ShrineCombat_IdleState__Fields fields;
};
struct ShrineCombat_IdleState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData OnSuspended;
  VirtualInvokeData OnUnsuspended;
};
struct ShrineCombat_IdleState__StaticFields {
};
struct ShrineCombat_IdleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShrineCombat_IdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShrineCombat_IdleState__VTable vtable;
};

struct ShrineCombat_RunningState__Fields {
  struct ShrineCombat_ShrineCombatState__Fields _;
};
struct ShrineCombat_RunningState {
  struct ShrineCombat_RunningState__Class *klass;
  struct MonitorData *monitor;
  struct ShrineCombat_RunningState__Fields fields;
};
struct ShrineCombat_RunningState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData OnSuspended;
  VirtualInvokeData OnUnsuspended;
};
struct ShrineCombat_RunningState__StaticFields {
};
struct ShrineCombat_RunningState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShrineCombat_RunningState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShrineCombat_RunningState__VTable vtable;
};

struct ShrineCombat_ConditionGuidType {
  struct ShrineCombat_ConditionGuidType__Class *klass;
  struct MonitorData *monitor;
};
struct ShrineCombat_ConditionGuidType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShrineCombat_ConditionGuidType__StaticFields {
};
struct ShrineCombat_ConditionGuidType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShrineCombat_ConditionGuidType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShrineCombat_ConditionGuidType__VTable vtable;
};

struct ShrineEntrance__Fields {
  struct SavePedestal__Fields _;
  struct MessageProvider * SaveMessageProvider;
  struct MessageProvider * SaveAndTeleportMessageProvider;
  struct MessageBox * m_hintMessageBox;
  float m_defaultHudFadeTime;
};
struct ShrineEntrance {
  struct ShrineEntrance__Class *klass;
  struct MonitorData *monitor;
  struct ShrineEntrance__Fields fields;
};
struct ShrineEntrance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
  VirtualInvokeData Highlight;
  VirtualInvokeData Unhighlight;
  VirtualInvokeData FixedUpdate;
};
struct ShrineEntrance__StaticFields {
};
struct ShrineEntrance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShrineEntrance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShrineEntrance__VTable vtable;
};

struct SpiritLantern__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * OnAttackAction;
  struct MoonTimeline * OnAttackTimeline;
  struct Color OuterGlowBashColor;
  struct Color SparkParticlesBashColor;
  struct Color m_originalOuterGlowColor;
  struct Color m_originalSparkParticlesColor;
  struct Renderer * OuterGlow;
  struct ParticleSystemRenderer * SparkParticles;
  struct SoundProvider * OnBashSoundProvider;
  struct SoundProvider * OnEnterBashRangeSoundProvider;
  bool ActivatedOnStart;
  bool m_activated;
  struct GameObject * Energy;
  bool CanBeLeashed;
  struct Transform * m_transform;
  struct Transform * m_parentTransform;
  struct Color m_lastOuterGlowColor;
  struct Color m_lastSparkParticlesColor;
  bool m_isBashHighlighted;
  struct Vector3 m_localStartPosition;
  bool m_awakeCalled;
  float _CameraTargetWeight_k__BackingField;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct SpiritLantern {
  struct SpiritLantern__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLantern__Fields fields;
};
struct SpiritLantern__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Position;
  VirtualInvokeData IsDead;
  VirtualInvokeData CanBeChargeFlamed;
  VirtualInvokeData CanBeChargeDashed;
  VirtualInvokeData CanBeGrenaded;
  VirtualInvokeData CanBeStomped;
  VirtualInvokeData CanBeBashed;
  VirtualInvokeData CanBeSpiritFlamed;
  VirtualInvokeData IsStompBouncable;
  VirtualInvokeData CanBeLevelUpBlasted;
  VirtualInvokeData CanBeSpiritSlashed;
  VirtualInvokeData CanBeHitByBow;
  VirtualInvokeData CanBeHitByMelee;
  VirtualInvokeData CanBeHitByHammerHandle;
  VirtualInvokeData CanBeHeavySpiritSlashed;
  VirtualInvokeData CanBeSpiritLeashed;
  VirtualInvokeData CanBeHomingMissiled;
  VirtualInvokeData CanBeTrapped;
  VirtualInvokeData CanBeSpiritSpeared;
  VirtualInvokeData CanBeTeleportedByBeacon;
  VirtualInvokeData CanBeGlowed;
  VirtualInvokeData get_AffectedReceivers;
  VirtualInvokeData get_BashPriority;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnBashHighlight;
  VirtualInvokeData OnBashDehighlight;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_CameraTargetActive;
  VirtualInvokeData get_CameraTargetPosition;
  VirtualInvokeData get_CameraTargetPadding;
  VirtualInvokeData get_CameraInfluencePosition;
  VirtualInvokeData AdjustCameraTargetWeight;
  VirtualInvokeData get_CameraInfluenceMinDist;
  VirtualInvokeData get_CameraInfluenceMaxDist;
  VirtualInvokeData get_CameraZoomFactor;
  VirtualInvokeData get_TargetType;
  VirtualInvokeData GetTargetData;
  VirtualInvokeData OnSceneRootPostEnable;
  VirtualInvokeData OnSceneRootPreDisable;
  VirtualInvokeData OnDestroy;
};
struct SpiritLantern__StaticFields {
};
struct SpiritLantern__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLantern__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLantern__VTable vtable;
};

struct SpiritLanternPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Prefab;
  struct Rope * RopeToAttachTo;
};
struct SpiritLanternPlaceholder {
  struct SpiritLanternPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLanternPlaceholder__Fields fields;
};
struct SpiritLanternPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
};
struct SpiritLanternPlaceholder__StaticFields {
};
struct SpiritLanternPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLanternPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLanternPlaceholder__VTable vtable;
};

struct HookFlingPlant__Fields {
  struct LegacySpiritLeashHook__Fields _;
  struct SeinSpiritLeashAbility * m_leash;
  struct Transform * HookTarget;
  float PullForce;
  float PullForceVerticalScale;
  float OriRequiredDistance;
  struct Rigidbody * m_rigidbody;
};
struct HookFlingPlant {
  struct HookFlingPlant__Class *klass;
  struct MonitorData *monitor;
  struct HookFlingPlant__Fields fields;
};
struct HookFlingPlant__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Position;
  VirtualInvokeData IsDead;
  VirtualInvokeData CanBeChargeFlamed;
  VirtualInvokeData CanBeChargeDashed;
  VirtualInvokeData CanBeGrenaded;
  VirtualInvokeData CanBeStomped;
  VirtualInvokeData CanBeBashed;
  VirtualInvokeData CanBeSpiritFlamed;
  VirtualInvokeData IsStompBouncable;
  VirtualInvokeData CanBeLevelUpBlasted;
  VirtualInvokeData CanBeSpiritSlashed;
  VirtualInvokeData CanBeHitByBow;
  VirtualInvokeData CanBeHitByMelee;
  VirtualInvokeData CanBeHitByHammerHandle;
  VirtualInvokeData CanBeHeavySpiritSlashed;
  VirtualInvokeData CanBeSpiritLeashed;
  VirtualInvokeData CanBeHomingMissiled;
  VirtualInvokeData CanBeTrapped;
  VirtualInvokeData CanBeSpiritSpeared;
  VirtualInvokeData CanBeTeleportedByBeacon;
  VirtualInvokeData CanBeGlowed;
  VirtualInvokeData get_AffectedReceivers;
  VirtualInvokeData get_SpiritLeashCost;
  VirtualInvokeData OnSpiritLeashHighlight;
  VirtualInvokeData OnSpiritLeashDehighlight;
  VirtualInvokeData OnSpiritLeashed;
  VirtualInvokeData get_HookTargetTransform;
  VirtualInvokeData ISpiritLeashAttackable_get_PositionOffset;
  VirtualInvokeData get_OriCloseEnoughDistance;
  VirtualInvokeData get_ShouldDecelerateOnApproach;
  VirtualInvokeData get_CanBeSustained;
  VirtualInvokeData get_LeashInteractionMode;
  VirtualInvokeData get_IsHookHorizontal;
  VirtualInvokeData set_IsHookHorizontal;
  VirtualInvokeData get_IsHookSticky;
  VirtualInvokeData set_IsHookSticky;
  VirtualInvokeData get_StressTested;
  VirtualInvokeData set_StressTested;
  VirtualInvokeData get_HookTransform;
  VirtualInvokeData ISpiritLeashHook_get_HookTargetTransform;
  VirtualInvokeData get_CameraTargetActive;
  VirtualInvokeData get_CameraTargetPosition;
  VirtualInvokeData get_CameraTargetPadding;
  VirtualInvokeData get_CameraInfluencePosition;
  VirtualInvokeData AdjustCameraTargetWeight;
  VirtualInvokeData get_CameraInfluenceMinDist;
  VirtualInvokeData get_CameraInfluenceMaxDist;
  VirtualInvokeData get_CameraZoomFactor;
  VirtualInvokeData get_TargetType;
  VirtualInvokeData GetTargetData;
  VirtualInvokeData OnSceneRootPostEnable;
  VirtualInvokeData OnSceneRootPreDisable;
  VirtualInvokeData OnCameraFrustumSuspended;
  VirtualInvokeData OnCameraFrustumResumed;
  VirtualInvokeData get_OriCloseEnoughDistance_1;
  VirtualInvokeData get_ShouldDecelerateOnApproach_1;
  VirtualInvokeData CanBeSpiritLeashed_1;
  VirtualInvokeData get_HookTargetTransform_1;
  VirtualInvokeData OnSpiritLeashed_1;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
};
struct HookFlingPlant__StaticFields {
};
struct HookFlingPlant__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HookFlingPlant__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HookFlingPlant__VTable vtable;
};

struct HookPlant_c {
  struct HookPlant_c__Class *klass;
  struct MonitorData *monitor;
};
struct HookPlant_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HookPlant_c__StaticFields {
  struct HookPlant_c * __9;
  struct Action * __9__26_0;
};
struct HookPlant_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HookPlant_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HookPlant_c__VTable vtable;
};

struct SpiritLeashEffect__Fields {
  struct MonoBehaviour__Fields _;
  struct AnimationCurve * CircleScaleAnimation;
  struct LineRenderer * LineRenderer;
  struct Transform * CircleTransform;
  struct SeinCharacter * m_sein;
  struct IAttackable * m_target;
  struct Vector3 m_circleStartScale;
  float m_effectDuration;
  float m_currentTime;
  struct AnimationCurve * Curve;
  struct AnimationCurve * DistanceOverTime;
  int32_t VertexCount;
  struct Vector3__Array * m_positions;
};
struct SpiritLeashEffect {
  struct SpiritLeashEffect__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLeashEffect__Fields fields;
};
struct SpiritLeashEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritLeashEffect__StaticFields {
};
struct SpiritLeashEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLeashEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLeashEffect__VTable vtable;
};

struct SpiritLeashHook__Fields {
  struct MonoBehaviour__Fields _;
  bool ActivatedOnStart;
  struct Transform * m_transform;
  bool Horizontal;
  bool IsSticky;
  enum SpiritLeashMode__Enum SpiritLeashMode;
  bool _Activated_k__BackingField;
  float HookTargetOffset;
  struct Vector2 HookPositionOffset;
  bool m_oldActivated;
  struct EventTriggerAnimator * DeactivateTrigger;
  bool CanTargetBeSustained;
  struct Vector3 m_localStartPosition;
  bool m_registered;
  bool _StressTested_k__BackingField;
  float _CameraTargetWeight_k__BackingField;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct SpiritLeashHook {
  struct SpiritLeashHook__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLeashHook__Fields fields;
};
struct SpiritLeashHook__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Position;
  VirtualInvokeData IsDead;
  VirtualInvokeData CanBeChargeFlamed;
  VirtualInvokeData CanBeChargeDashed;
  VirtualInvokeData CanBeGrenaded;
  VirtualInvokeData CanBeStomped;
  VirtualInvokeData CanBeBashed;
  VirtualInvokeData CanBeSpiritFlamed;
  VirtualInvokeData IsStompBouncable;
  VirtualInvokeData CanBeLevelUpBlasted;
  VirtualInvokeData CanBeSpiritSlashed;
  VirtualInvokeData CanBeHitByBow;
  VirtualInvokeData CanBeHitByMelee;
  VirtualInvokeData CanBeHitByHammerHandle;
  VirtualInvokeData CanBeHeavySpiritSlashed;
  VirtualInvokeData CanBeSpiritLeashed;
  VirtualInvokeData CanBeHomingMissiled;
  VirtualInvokeData CanBeTrapped;
  VirtualInvokeData CanBeSpiritSpeared;
  VirtualInvokeData CanBeTeleportedByBeacon;
  VirtualInvokeData CanBeGlowed;
  VirtualInvokeData get_AffectedReceivers;
  VirtualInvokeData get_SpiritLeashCost;
  VirtualInvokeData OnSpiritLeashHighlight;
  VirtualInvokeData OnSpiritLeashDehighlight;
  VirtualInvokeData OnSpiritLeashed;
  VirtualInvokeData get_HookTargetTransform;
  VirtualInvokeData ISpiritLeashAttackable_get_PositionOffset;
  VirtualInvokeData get_OriCloseEnoughDistance;
  VirtualInvokeData get_ShouldDecelerateOnApproach;
  VirtualInvokeData get_CanBeSustained;
  VirtualInvokeData get_LeashInteractionMode;
  VirtualInvokeData get_IsHookHorizontal;
  VirtualInvokeData set_IsHookHorizontal;
  VirtualInvokeData get_IsHookSticky;
  VirtualInvokeData set_IsHookSticky;
  VirtualInvokeData get_StressTested;
  VirtualInvokeData set_StressTested;
  VirtualInvokeData get_HookTransform;
  VirtualInvokeData ISpiritLeashHook_get_HookTargetTransform;
  VirtualInvokeData get_CameraTargetActive;
  VirtualInvokeData get_CameraTargetPosition;
  VirtualInvokeData get_CameraTargetPadding;
  VirtualInvokeData get_CameraInfluencePosition;
  VirtualInvokeData AdjustCameraTargetWeight;
  VirtualInvokeData get_CameraInfluenceMinDist;
  VirtualInvokeData get_CameraInfluenceMaxDist;
  VirtualInvokeData get_CameraZoomFactor;
  VirtualInvokeData get_TargetType;
  VirtualInvokeData GetTargetData;
  VirtualInvokeData OnSceneRootPostEnable;
  VirtualInvokeData OnSceneRootPreDisable;
  VirtualInvokeData get_OriCloseEnoughDistance_1;
  VirtualInvokeData get_ShouldDecelerateOnApproach_1;
  VirtualInvokeData get_HookTargetTransform_1;
  VirtualInvokeData OnSpiritLeashed_1;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
};