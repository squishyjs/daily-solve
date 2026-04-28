#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using int64 = long long;
using u32 = uint_fast32_t;

static int64 solve(const int s, const int x,
                   const int y, const int z) {
    const int total = x + y;
    const int required = z;
    const int memory = s;

    if (total + required <= memory) {
        return 0;
    }

    if (memory < y + z && memory < x + z) {
        return 2;
    }

    // otherwise
    return 1;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int s, x, y, z;
        std::cin >> s >> x >> y >> z;

        std::cout << solve(s, x, y, z);
        std::cout << "\n";
    }

    return 0;
}
