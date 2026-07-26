#include <iostream>
#include <algorithm>

static int solve(const int x) {
    // TODO:
    if (x % 25 == 0) {
        return x / 25;
    }

    return (x / 25) + 1;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x;
        std::cin >> x;
        std::cout << solve(x);
        std::cout << "\n";
    }

    return 0;
}
