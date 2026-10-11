#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static std::string solve(const int x, const int k, const int y) {
    int iter = k;
    for (int i = 0; i < x; i++) {
        if (y == iter)
        {
            return "YES";
        }

        iter += k;
    }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
        int x, k, y;
        std::cin >> x >> k  >> y;
        std::cout << solve(x, k, y);
        std::cout << "\n";
    // }

    return 0;
}
