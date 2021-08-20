#include <iostream>
#include "arithmeticAverage.hpp"

int main() {
    std::vector<int> v1 = {1, 2, 3, 4};
    std::vector<int> v2 = {1, 2, 3, 4};
    std::vector<int> first{-5, 4, 2, -5, 2, 4, 6, 7};
    std::vector<int> second{3, 5, -2, 6, 7, -3, 6, 9};
    std::vector<int> f{7, 4, 3};
    std::vector<int> s{17, 6, 2};
    std::cout << ArithmeticAverage(first, second);
    std::cout << std::endl;
    std::cout << Distance(f, s);

    return 0;
}