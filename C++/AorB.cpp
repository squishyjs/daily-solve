#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int x, const int y) {
    int a = 500 - (x * 2);
    int b = 1000 - ((x + y) * 4);

    int c = 1000 - (y * 4);
    int d = 500 - ((x + y) * 2);

    return std::max((a + b), (c + d));
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

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
