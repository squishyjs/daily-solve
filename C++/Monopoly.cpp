#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::string solve(const int p, const int q,
                 const int r, const int s) {
    // TODO:
    int a = q + r + s;
    int b = p + r + s;
    int c = p + q + s;
    int d = p + q + r;
    if (p > a || q > b || r > c || s > d) { return "YES"; }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int p, q, r, s;
        std::cin >> p >> q >> r >> s;

        std::cout << solve(p, q, r, s);
        std::cout << "\n";
    }

    return 0;
}
