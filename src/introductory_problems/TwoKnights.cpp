#include "TwoKnights.h"
#include <iostream>
typedef long long ll;

// Combinations Problem
int TwoKnightsMain() {
    ll input;
    std::cin >> input;

    for (ll n = 1; n <= input; ++n) {
        ll area = n * n;
        ll numWaysToAttack {2*(((n-1)*(n-2))+((n-2)*(n-1)))};
        ll numPlacesOnBoard {area*(area-1)/2};
        std::cout << numPlacesOnBoard - numWaysToAttack << "\n";
    }
    return 0;
}