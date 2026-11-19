#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::string solve(const int x) {
    if (x % 3 == 0) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     int p, q, r, s;
    //     std::cin >> p >> q >> r >> s;

    //     std::cout << solve(p, q, r, s);
    //     std::cout << "\n";
    // }
    int n;
    std::cin >> n;
    std::cout << solve(n);
    std::cout << "\n";

    return 0;
}
