#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;

static int solve(const int x, const int y) {
    if (x == y) { return 0; }

    return abs(x - y);
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
