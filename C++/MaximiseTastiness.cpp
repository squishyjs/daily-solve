#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using int64 = long long;
using u32 = uint_fast32_t;

static int solve(const int a, const int b,
                 const int c, const int d) {

    return (std::max(a, b) + std::max(c, d));

}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;

        std::cout << solve(a, b, c, d);
        std::cout << "\n";
    }

    return 0;
}
