#include "NumberSpiral.h"
#include <iostream>
#include <cmath>
typedef long long ll;

int NumberSpiralMain() {
    int tests;
    std::cin >> tests;
    for (int test = 1; test <= tests; ++test) {
        ll row, col;
        std::cin >> row >> col;

        if (row == 1 && col == 1) {
            std::cout << 1 << "\n";
            continue;
        }
        ll max {std::max<ll>(row, col)};
        ll square = max * max;

        if (square % 2 == 0) {
            ll addend1 {max - row};
            ll addend2 {col - 1};
            std::cout << square - (addend1 + addend2) << "\n";
            continue;
        }
        else {
            ll addend1 {max - col};
            ll addend2 {row - 1};
            std::cout << square - (addend1 + addend2) << "\n";
            continue;
        }
    }
}
