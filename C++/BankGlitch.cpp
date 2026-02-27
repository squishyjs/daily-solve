#include <iostream>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr)

using int64 = long long;

int64 solve(int a, int b, int x, int y) {
    if (a < x) {
        return a + b;
    }

    int64 converison = a / x;
    int64 rem_a = a % x;
    int64 rem_b = b;

    return converison * y + rem_a + rem_b;
}

int main(void) {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b, x, y;
        std::cin >> a >> b >> x >> y;

        std::cout << solve(a, b, x, y);
        std::cout << "\n";
    }

    return 0;
}
