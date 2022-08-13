// #include "BitStrings.h"
#include <iostream>
typedef unsigned long long ull;
#define MOD (ull) 1e9 + 7;

int main() {
    ull n;
    std::cin >> n;

    ull value = 2;
    for (ull i = 2; i <= n; i++) {
        value *= 2;
        value %= MOD;
    }
    std::cout << value;
}