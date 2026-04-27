#include <codecvt>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using int64 = long long;
using u32 = std::uint32_t;

static std::string solve(const int a, const int b,
                         const int x, const int y) {
    // PERF:
    if (a == b) {
        return "YES";
    }

    int diff = std::abs(a - b);
    if (a > b)
    {
        if (y >= diff) {
            return "YES";
        }
    }

    if (a < b) {
        if (x >= diff) {
            return "YES";
        }
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
        int a, b, x, y;
        std::cin >> a >> b >> x >> y;

        std::cout << solve(a, b, x, y);
        std::cout << "\n";
    }

    return 0;
}
