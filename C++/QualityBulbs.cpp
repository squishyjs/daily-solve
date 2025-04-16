#include <cstdio>
#include <iostream>
#include <vector>

int solve(int n, int x, std::vector<int> &lifetimes) {
    int nMinusTotal = 0;
    for (int i = 0; i < n - 1; ++i) {
        nMinusTotal += lifetimes[i];
    }

    int average = nMinusTotal / (n - 1);
    if (average >= x) {
        return 0;
    }
    return (x * n) - nMinusTotal;
}


int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {

        int bulbs, minLife;
        std::cin >> bulbs >> minLife;
        std::vector<int> lifetimes(bulbs - 1);
        for (int i = 0; i < bulbs - 1; ++i) {
            std::cin >> lifetimes[i];
        }
        int res = solve(bulbs, minLife, lifetimes);
        std::cout << res << std::endl;

    }
    return 0;
}
