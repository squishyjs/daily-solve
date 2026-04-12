#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

bool is_approved(int &x, int &y) {
    return y >= (std::ceil(x / 2));
}

std::string solve(int x, int y) {
    // cook
    if (is_approved(x, y)) { return "Yes"; }

    return "No";
}

int main(void) {
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
