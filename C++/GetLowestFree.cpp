#include <cstdint>
#include <ios>
#include <iostream>
#include <algorithm>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int a, int b, int c) {
    int64 total = a + b + c;
    int64 min_price = std::min(a, std::min(b, c));

    return total - min_price;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        std::cout << solve(a, b, c);
        std::cout << "\n";
    }

    return 0;
}
