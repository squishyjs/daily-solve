#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

bool divThree(int x) {
    return x % 3 == 0;
}

int solve(int x, int y) {
    if (divThree(x) && divThree(y)) {
        return 0;
    }
    return std::max(x, y) % 3;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;
        int res = solve(x, y);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
