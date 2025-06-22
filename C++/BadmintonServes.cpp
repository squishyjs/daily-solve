#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#include <cstdlib>

int solve(int p) {
    // cook
    int right = 1;
    right += (p / 2);
    return right;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int p; std::cin >> p;
        int res = solve(p);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
