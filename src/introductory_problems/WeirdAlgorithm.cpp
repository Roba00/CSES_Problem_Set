#include "WeirdAlgorithm.h"
#include <iostream>

int WeirdAlgorithmMain()
{
    unsigned long n;
    std::cin >> n;
    std::cout << n << "\n";

    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = n * 3 + 1;
        }
        std::cout << n << "\n";
    }

    return 0;
}