#include "MissingNumber.h"
#include <iostream>

int MissingNumberMain()
{
    // Reads size
    unsigned long n;
    std::cin >> n;

    // Creates boolean array to represent number indexes
    bool numbers[n + 1];
    for (unsigned int i = 1; i < n + 1; i++) {
        numbers[i] = false;
    }
    numbers[0] = true;

    // Iteratively reads numbers in second line,
    // and calls true if each number is read
    for (unsigned int i = 0; i < n - 1; i++) {
        int tempNumber;
        std::cin >> tempNumber;
        numbers[tempNumber] = true;
    }

    // Prints out missing number
    for (unsigned int i = 1; i < n + 1; i++) {
        if (!numbers[i]) {
            std::cout << i;
        }
    }

    return 0;
}