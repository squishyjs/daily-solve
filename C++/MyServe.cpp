#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#include <cstdlib>
#include <cmath>

std::string solve(int p, int q) {
    if (p == 0 && q == 0) {
        return "ALICE";
    }

    int total = p + q;
    int r = total % 4;
    if (r == 0 or r == 1) {
        return "ALICE";
    }
    return "BOB";
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int p, q;
        std::cin >> p >> q;
        std::string res = solve(p, q);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
