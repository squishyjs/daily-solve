#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n) {
    int polybag = 10;
    return static_cast<int>(std::ceil(static_cast<double>(n) / polybag));
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
        std::cout << solve(n) << "\n";
    }

    return 0;
}
