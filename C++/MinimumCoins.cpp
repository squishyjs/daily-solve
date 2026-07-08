#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

bool is_possible(const int num) {
    return num % 5 == 0;
}

static int solve(const int x) {
    // TODO:
    if (!is_possible(x)) {
        return -1;
    }

    int res = x / 10;
    if (x % 10 == 0) {
        return res;
    }

    return ++res;
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
