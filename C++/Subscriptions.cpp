#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;

int64 solve(int n, int x) {
    int tv_cost = x;
    if (n < 6) {
        return tv_cost;
    }

    if (n % 6 != 0) {
        return tv_cost * (n / 6 + 1);
    }

    return n / 6 * tv_cost;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;

        std::cout << solve(n, x);
        std::cout << "\n";
    }

    return 0;
}
