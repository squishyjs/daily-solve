#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int x) {
    int total = 0;
    if (x <= 20) {

        total = x * 10;
    } else {

        int first = 20 * 10;
        int second = ((x - 20) / 2) * 5;

        total = first + second;
    }

    return total;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x;
        std::cin >> x;

        std::cout << solve(x);
        std::cout << "\n";
    }

    return 0;
}
