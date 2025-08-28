#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int solve(int oranges, int water) {
    // edge cases
    if (water < 2 || oranges < 1) {
        return 0;
    }

    int max_oranges_used = water / 2;
    return std::min(oranges, max_oranges_used) * 3;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int o, w;
        std::cin >> o >> w;
        int res = solve(o, w);
        std::cout << res << std::endl;
    }

    return 0;
}
