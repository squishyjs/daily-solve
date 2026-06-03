#include <cstdint>
#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static char solve(const int a, const int b_) {
    if (a < b_) {
        return '<';
    }

    if (a > b_) {
        return '>';
    }

    return '=';
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;

        std::cout << solve(a, b);
        std::cout << "\n";
    }

    return 0;
}
