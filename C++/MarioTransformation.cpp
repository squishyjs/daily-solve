#include <codecvt>
#include <cstddef>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::string solve(const int x) {
    // PERF:
    // numbers indicate mushrooms eaten
    // 0: normal
    // 1: huge
    // 2: small
    // 3: normal
    // 4: huge
    // 5: small
    // 6: ..
    // 7: ..

    if (x % 3 == 0) {
        return "NORMAL";
    }

    if (x % 3 == 1) {
        return "HUGE";
    }

    if (x % 3 == 2) {
        return "SMALL";
    }

    return nullptr;
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
