#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

const int PIZZA = 4;

int solve(int n, int x) {
    u32 total_required = n * x;

    if (total_required % PIZZA != 0) {
        return (total_required / PIZZA) + 1;
    }

    return total_required / PIZZA;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;

        std::cout << solve(n, x);
        std::cout << "\n";
    }

    return 0;
}
