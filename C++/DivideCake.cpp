#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static void solve(const int n) {
    if (360 % n == 0) {
        std::cout << "y ";
    } else {
        std::cout << "n ";
    }

    if (n <= 360 and n != 0) {
        std::cout << "y ";
    } else {
        std::cout << "n ";
    }

    if (n <= 26) {
        std::cout << "y";
    } else {
        std::cout << "n";
    }

    // separate new test case
    std::cout << "\n";
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

        solve(n);
    }

    return 0;
}
