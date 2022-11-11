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

// intentionally duplicate code
template<typename T>
T clamped_add2(T a, T b, T max_val) {
    static_assert(std::is_unsigned_v<T>, "Only unsigned types are supported");
    const T sum = a + b;
    if (sum < a) // unsigned overflow detected in addition
        return max_val;
    return std::min(sum, max_val);
}

template<typename T>
T clamped_add3(T a, T b, T max_val) {
    static_assert(std::is_unsigned_v<T>, "Only unsigned types are supported");
    const T sum = a + b;
    if (sum < a) // unsigned overflow detected in addition
        return max_val;
    return std::min(sum, max_val);
}

template<typename T>
T clamped_add4(T a, T b, T max_val) {
    static_assert(std::is_unsigned_v<T>, "Only unsigned types are supported");
    int unused = 0;
    const T sum = a + b;
    if (sum < a) // unsigned overflow detected in addition
        return max_val;
    return std::min(sum, max_val);
}

namespace duplicate {

template<typename T>
T clamped_add(T a, T b, T max_val) {
    static_assert(std::is_unsigned_v<T>, "Only unsigned types are supported");
    const T sum = a + b;
    if (sum < a) // unsigned overflow detected in addition
        return max_val;
    return std::min(sum, max_val);
}

// intentionally duplicate code
template<typename T>
T clamped_add2(T a, T b, T max_val) {
    static_assert(std::is_unsigned_v<T>, "Only unsigned types are supported");
    const T sum = a + b;
    if (sum < a) // unsigned overflow detected in addition
        return max_val;
    return std::min(sum, max_val);
}

template<typename T>
T clamped_add3(T a, T b, T max_val) {
    static_assert(std::is_unsigned_v<T>, "Only unsigned types are supported");
    const T sum = a + b;
    if (sum < a) // unsigned overflow detected in addition
        return max_val;
    return std::min(sum, max_val);
}

template<typename T>
T clamped_add4(T a, T b, T max_val) {
    static_assert(std::is_unsigned_v<T>, "Only unsigned types are supported");
    int unused = 0;
    const T sum = a + b;
    if (sum < a) // unsigned overflow detected in addition
        return max_val;
    return std::min(sum, max_val);
}
}
