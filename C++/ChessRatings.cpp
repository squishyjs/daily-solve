#include <cstdint>
#include <iostream>
#include <algorithm>
#include <vector>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int x, int y) {
    if (x == y) {
        return 0;
    }

    int difference = y - x;
    if (difference % 8 != 0) {
        return (difference / 8) + 1;
    }

    return difference / 8;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;

        std::cout << solve(x, y);
        std::cout << "\n";
    }

    return 0;
}
