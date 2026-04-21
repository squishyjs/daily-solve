#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using int64 = long long;

static int64 solve(const int x, const int y) {
    int dist = x;
    if (x % y == 0) {
        return x / y;
    }

    int one = x / 1;
    int other = dist - (y * (x / y)) + (x / y);
    return std::min(one, other);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;

        std::cout << solve(x, y);
        std::cout << "\n";
    }

    return 0;
}
