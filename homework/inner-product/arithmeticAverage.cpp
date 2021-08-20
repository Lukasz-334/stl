#include "arithmeticAverage.hpp"
#include <algorithm>
#include <cmath>
#include <numeric>

double ArithmeticAverage(const std::vector<int>& vectorOne, const std::vector<int>& vectorTwo) {
    double const sumOne = std::reduce(begin(vectorOne), end(vectorOne));
    double const sumTwo = std::reduce(begin(vectorTwo), end(vectorTwo));
    double quantity = static_cast<double>(vectorOne.size()) + static_cast<double>(vectorTwo.size());
    double result = (sumOne + sumTwo) / quantity;
    return result;
}

double Distance(const std::vector<int>& vectorOne, const std::vector<int>& vectorTwo) {
    if (vectorOne.size() == vectorTwo.size()) {
        double x = 0;
        double y = 0;
        double p = 0;
        double sum = 0;
        double result = 0;
        size_t size = vectorOne.size();

        for (size_t i = 0; i < size; i++) {
            x = static_cast<double>(vectorOne[i]);
            y = static_cast<double>(vectorTwo[i]);
            p = pow(x - y, 2);
            sum += p;
        }
        result = sqrt(sum);
        return result;
    }

    else {
        std::cout << "Wrong size";
        return 0;
    }
}