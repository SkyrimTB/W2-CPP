#include <algorithm>
#include <vector>
#include <type_traits>

template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, T>::type
median_generic(std::vector<T> v) {
    if (v.empty()) return T();

    size_t n = v.size() / 2;
    std::nth_element(v.begin(), v.begin() + n, v.end());

    if (v.size() % 2) {
        return v[n];
    } else {
        T max_of_lower_half = *std::max_element(v.begin(), v.begin() + n);
        return (max_of_lower_half + v[n]) / 2.0;
    }
}


