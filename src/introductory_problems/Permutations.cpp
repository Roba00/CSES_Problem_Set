#include "Permutations.h"
#include <iostream>
typedef unsigned long long ll;

int PermutationsMain() {
    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << 1;
        return 0;
    }
    else if (n < 4) {
        std::cout << "NO SOLUTION";
        return 0;
    }

    if (n % 2 == 0) {
        for (int i = 2; i <= n; i+=2) {
            std::cout << i << " ";
        }
        for (int i = 1; i <= n - 1; i+=2) {
            std::cout << i << " ";
        }
    }
    else {
        for (int i = 2; i <= n - 1; i+=2) {
            std::cout << i << " ";
        }
        for (int i = 1; i <= n; i+=2) {
            std::cout << i << " ";
        }
    }
}