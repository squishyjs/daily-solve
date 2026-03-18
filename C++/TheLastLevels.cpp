#include <cstddef>
#include <cstdint>
#include <ios>
#include <iostream>
#include <algorithm>
#include <sys/types.h>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int x, int y, int z) {
    int break_time;
    if (x % 3 == 0) {
        break_time = ((x / 3) - 1) * z;
    }
    else {
        break_time = (x / 3) * z;
    }
    int total_time = x * y;

    return break_time + total_time;
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
