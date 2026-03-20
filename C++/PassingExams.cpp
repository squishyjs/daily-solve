#include <cstddef>
#include <cstdint>
#include <ios>
#include <iostream>
#include <algorithm>
#include <sys/types.h>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int x, int y, int z) {
    int passed = 0;
    if (x >= 50) { passed++; }

    if (y >= 50) { passed++; }

    if (z >= 50) { passed++; }

    if (passed >= 2) {
        return "Yes";
    }

    return "No";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

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
