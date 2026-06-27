#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int d, const int t) {
    int time_taken = d - t;

    if (t >= d) {
        return 0;
    }

    return time_taken;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
        int d, t;
        std::cin >> d >> t;
        std::cout << solve(d, t);
        std::cout << "\n";
    // }

    return 0;
}
