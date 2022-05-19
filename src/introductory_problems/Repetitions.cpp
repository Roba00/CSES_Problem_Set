#include "Repetitions.h"
#include <iostream>
#include <string>

int RepetitionsMain()
{
    // Reads string
    std::string s;
    std::getline(std::cin, s);

    // Reads starting characters
    bool startingCharacter[s.size()];
    startingCharacter[0] = true;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1])
            startingCharacter[i] = false;
        else
            startingCharacter[i] = true;
    }

    // Finds the longest length
    int count = 1;
    int max = 1;
    for (int i = 1; i < s.size(); i++) {
        if (startingCharacter[i]) {
            if (count > max) {
                max = count;
            }
            count = 1;
        }
        else {
            count++;
        }
    }
    if (count > max) {
        max = count;
    }

    std::cout << max;
    return 0;
}