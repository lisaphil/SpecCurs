#include <iostream>

template<class...T>
struct are_same {};

template<class T1, class T2, class...T>
struct are_same<T1, T2, T...> {
    static constexpr bool value = std::is_same<T1, T2>::value and are_same<T...>::value;
};

template<class T>
struct are_same<T> {
    static constexpr bool value = std::true_type::value;
};

template<>
struct are_same<> {
    static constexpr bool value = std::false_type::value;
};

template <typename... T>
constexpr bool are_same_v = are_same<T...>::value;