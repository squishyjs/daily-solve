#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int a, const int b, const int c) {
    int total = a + b + c;
    return total - std::min(std::min(a, b), c) - std::max(std::max(a, b), c);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

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
