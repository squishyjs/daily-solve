#include <climits>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

u32 match_discount(int x) {
    if (x <= 100) {
        return 0;
    }

    if (x > 100 and x <= 1000) {
        return 25;
    }

    if (x > 1000 and x <= 5000) {
        return 100;
    }

    return 500;
}

int64 solve(int x) {
    int discount = match_discount(x);

    return x - discount;
}

int main(void) {
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
