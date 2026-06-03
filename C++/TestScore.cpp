#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::string solve(const int n, const int x, const int y) {
    if (y % x == 0 && y / x <= n) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x, y;
        std::cin >> n >> x >> y;

        std::cout << solve(n, x, y);
        std::cout << "\n";
    }

    return 0;
}
