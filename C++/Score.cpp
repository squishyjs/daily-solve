#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const int a, const int b, const int c) {
    return std::max({a, b, c});
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        std::cout << solve(a, b, c);
        std::cout << "\n";
    }

    return 0;
}
