#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int a, const int b) {
    return std::min(3 * a, a + b);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
        int a, b;
        std::cin >> a >> b;
        std::cout << solve(a, b);
    // }

    return 0;
}
