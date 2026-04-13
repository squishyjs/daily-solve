#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;

int64 solve(int n, int a, int b) {
    // TODO:
    int odd = n / 2;
    int even = n - odd;

    return (even * a) + (odd * b);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, a, b;
        std::cin >> n >> a >> b;

        std::cout << solve(n, a, b);
        std::cout << "\n";
    }

    return 0;
}
