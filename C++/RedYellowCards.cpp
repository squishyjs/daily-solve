#include <cerrno>
#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

static int solve(const int r, const int y) {
    // TODO:
    int res = r;
    if (y > r + 1) {
        res += (y - r) / 2;
    }

    return res;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int r, y;
        std::cin >> r >> y;
        std::cout << solve(r, y);
        std::cout << "\n";
    }

    return 0;
}
