#include <cmath>
#include <cstdint>
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n) {
    if (n == 1) {
        return 0;
    }

    int count = 0, temp = n, week = 7;
    temp += 5; // monday -> tuesday -> 5 days

    return std::floor(static_cast<float>(temp) / week);
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
