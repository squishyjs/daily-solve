#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bit>

static int solve(const int n, const int a, const int b) {
    unsigned divs = __builtin_ctz(n);
    return ((divs - 1) * b) + divs * a;
    // return static_cast<int>(NULL);
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
