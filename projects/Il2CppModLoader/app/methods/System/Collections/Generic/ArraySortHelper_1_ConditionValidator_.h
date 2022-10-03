#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ConditionValidator_ {
    IL2CPP_REGISTER_METHOD(0x02F2EC10, void, Sort_1, (app::ConditionValidator__Array * keys, int32_t index, int32_t length, app::IComparer_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04766630, ArraySortHelper_1_ConditionValidator__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2EF30, int32_t, BinarySearch, (app::ConditionValidator__Array * array, int32_t index, int32_t length, app::ConditionValidator value, app::IComparer_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04706220, ArraySortHelper_1_ConditionValidator__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2F0E0, void, Sort_2, (app::ConditionValidator__Array * keys, int32_t index, int32_t length, app::Comparison_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04750300, ArraySortHelper_1_ConditionValidator__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::ConditionValidator__Array * array, int32_t index, int32_t length, app::ConditionValidator value, app::IComparer_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::ConditionValidator__Array * keys, app::Comparison_1_ConditionValidator_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::ConditionValidator__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::ConditionValidator__Array * keys, int32_t left, int32_t length, app::Comparison_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::ConditionValidator__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::ConditionValidator__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::ConditionValidator__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::ConditionValidator__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_ConditionValidator_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::ConditionValidator__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ConditionValidator_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ConditionValidator_
