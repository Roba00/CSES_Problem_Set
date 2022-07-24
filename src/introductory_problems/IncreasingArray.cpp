#include "IncreasingArray.h"
#include <iostream>
typedef unsigned long long ll;

int IncreasingArrayMain()
{
    // Reads size of array
    int n;
    std::cin >> n;

    ll maxNum {0};
    ll sumMoves {0};
    for (int i = 0; i < n; ++i) {
        // Get the current value
        ll currentVal{};
        std::cin >> currentVal;

        // If current value is less than a previous one, then increment it and the sum
        if (currentVal < maxNum) {
            sumMoves += maxNum - currentVal;
        }
        maxNum = std::max(currentVal, maxNum);
    }

    // Return the sum
    std::cout << sumMoves;
    return 0;
}