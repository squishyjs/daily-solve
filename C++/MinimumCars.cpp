#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <stdint.h>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int64 solve(const int n) {
    int people_required = n / 4;
    if (n % 4 == 0) {
        return people_required;
    }

    return people_required + 1;
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
