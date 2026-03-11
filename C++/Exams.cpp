#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int x, int y, int z) {
    int total_students = x * y;
    if (z > total_students / 2) {
        return "Yes";
    }

    return "No";
}

int main(void) {
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
