#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cstdlib>

int solve(int x) {
    if (x % 3 == 0) {
        return 3;
    }
    return 1;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int x; std::cin >> x;
        int res = solve(x);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
