#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr)

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int x, int y, int n) {
    int melted = y * n;
    int remaining = x - melted;

    if (remaining <= 0) {
        return 0;
    }

    return remaining;
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int x, y, n;
        std::cin >> x >> y >> n;

        std::cout << solve(x, y, n);
        std::cout << "\n";
    }

    return 0;
}
