#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int r, const int l) {
    return std::abs(r - l);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
        int r, l;
        std::cin >> r >> l;
        std::cout << solve(r, l);
        std::cout << "\n";
    // }

    return 0;
}
