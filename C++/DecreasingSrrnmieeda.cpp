#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <numeric>

int solve(int l, int r) {
    // cook the code
    int difference = abs(l - r);
    // std::cout << "The difference is: " << difference << "\n";
    if (difference >= 2 && (l > r / 2) && l != 1) {
        return r;
    }
    return -EXIT_FAILURE;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int l, r; std::cin >> l >> r;
        int res = solve(l, r);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
