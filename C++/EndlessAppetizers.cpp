#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int x, const int y, const int r) {
    int moz_required = r / 30;
    int sticks_required = moz_required + x;

    if (sticks_required % y != 0) {
        return (sticks_required / y) + 1;
    }

    return sticks_required / y;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int x, y, r;
        std::cin >> x >> y >> r;
        std::cout << solve(x, y, r);
        std::cout << "\n";
    }

    return 0;
}
