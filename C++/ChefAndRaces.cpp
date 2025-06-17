#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#include <cstdlib>

int solve(int x, int y, int a, int b) {
    int gold = 2;
    if (x == a || x == b) {
        gold--;
    }
    if (y == a || y == b) {
        gold--;
    }
    return gold;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int x, y, a, b;
        std::cin >> x >> y >> a >> b;
        int res = solve(x, y, a, b);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
