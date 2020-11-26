#include <iostream>
#include "AreSame.cpp"

int main() {
    std::cout << are_same<std::string, int32_t, signed int>::value << std::endl;
    std::cout << are_same<int, int32_t, signed int>::value << std::endl;
    static_assert(are_same_v<int, int32_t, signed int>, "compile assert");  
}
