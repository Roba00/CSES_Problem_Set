#include "TwoSets.h"
#include <iostream>
#include <list>
typedef long long ll;

void printList(std::list<ll> list) {
    std::list<ll>::iterator it = list.begin();
    for (int i = 0; i < list.size(); i++) {
        std::cout << *it << " ";
        std::advance(it, 1);
    }
    std::cout << "\n";
}

int TwoSetsMain() {
    ll input;
    std::cin >> input;

    ll sumBoth {input*(input+1)/2};
    if (sumBoth % 2 == 1) {
        std::cout << "NO";
        return 0;
    }
    std::cout << "YES\n";

    ll currentSum = sumBoth / 2;
    std::list<ll> first;
    std::list<ll> second;
    for (ll i = input; i >= 1; i--) {
        if (currentSum - i >= 0) {
            currentSum -= i;
            first.push_back(i);
        }
        else {
            second.push_back(i);
        }
    }

    std::cout << first.size() << "\n";
    printList(first);
    std::cout << second.size() << "\n";
    printList(second);

    return 0;
}