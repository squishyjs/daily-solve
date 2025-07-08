#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cstdlib>

int solve(int k) {
    int deck = 52;
    if (k > deck) {
        return -1;
    }

    int discard = deck - k;
    while (discard >= k) {
        discard -= k;
    }

    return discard;
}

int main() {
    int t; std::cin >> t;

    while (t--) {
        int k; std::cin >> k;

        int res = solve(k);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
