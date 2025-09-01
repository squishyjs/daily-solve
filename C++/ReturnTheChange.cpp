#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <climits>

int solve(int x) {
    if (x % 10 == 0) {
        return 100 - x;
    }

    int n = (x + 5) / 10 * 10;
    return 100 - n;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x;
        std::cin >> x;

        int res = solve(x);
        std::cout << res << std::endl;
    }

    return 0;
}
