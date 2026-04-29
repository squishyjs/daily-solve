#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;

static int solve(const int n) {
    const int PRICE = 50;
    const int total = PRICE * n;

    return static_cast<int>(total * 0.3);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::cout << solve(n);
        std::cout << "\n";
    }

    return 0;
}
