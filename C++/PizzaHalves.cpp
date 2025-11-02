#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

int solve(int x) {
    // 2, 4, 8, 16, 32, 64, 128, 256, 512, ...
    if (x <= 2 || x == 4) {
        return 0;
    }

    int temp = 2;
    // find number of missing BOTTOM pizza-halves
    while ((temp * 2) <= x) {
        temp *= 2;
    }

    // multiply by 2 to get TOP pizza-halves
    return 2 * (x - temp);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int x;
        std::cin >> x;

        int res = solve(x);
        std::cout << res << std::endl;
    }

    return 0;
}
