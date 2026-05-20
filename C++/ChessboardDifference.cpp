#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <string>
#include <vector>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int x1, const int x2,
                 const int y1, const int y2) {

    // get max difference
    return std::max(std::abs(x1 - y1), std::abs(x2 - y2));
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x1, x2, y1, y2;
        std::cin >> x1 >> x2 >> y1 >> y2;

        std::cout << solve(x1, x2, y1, y2);
        std::cout << "\n";
    }

    return 0;
}
