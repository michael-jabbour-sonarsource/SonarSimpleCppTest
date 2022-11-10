#pragma once
#include <algorithm>
#include <type_traits>

template<typename T>
T clamped_add(T a, T b, T max_val) {
    static_assert(std::is_unsigned_v<T>, "Only unsigned types are supported");
    const T sum = a + b;
    if (sum < a) // unsigned overflow detected in addition
        return max_val;
    return std::min(sum, max_val);
}

