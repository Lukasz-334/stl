#include <iostream>
#include <string>
#include "transform_containers.hpp"

int main() {
    std::list<std::string> test = {"abc", "ff", "aaa", "abc", "ba", "cc", "ba", "a"};
    std::deque<int> test2 = {2, 4, 5, 1, 1, 2, 6, 6, 6, 6, 6, 3, 3, 3,12};

    removeDuplicateAndTranformToMap(test, test2);

    return 0;
}