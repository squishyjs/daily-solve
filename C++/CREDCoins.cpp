#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

const int BAG = 100;

u32 solve(int x, int y) {
    u32 total = x * y;

    return total / BAG;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

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
