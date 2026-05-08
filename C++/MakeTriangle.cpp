#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int x, const int y, const int z) {
    // TODO:
    int max = std::max({x,y,z});
    int sum = x + y + z - max;

    return std::max(0, max - sum + 1);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x, y, z;
        std::cin >> x >> y >> z;

        std::cout << solve(x, y, z);
        std::cout << "\n";
    }

    return 0;
}
