#include <cmath>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int x, const int y) {
    // TODO:
    int initial = x;
    int time_taken = 0;
    const float ten = 10;
    while (y < initial) {
        int seconds = static_cast<int>(std::ceil(static_cast<float>(initial) / ten));
        // std::cout << "Seconds: " << seconds << std::endl;
        time_taken += seconds;

        // reduce by 1 second
        --initial;
    }

    return time_taken;
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
        std::cout << solve(x, y) << "\n";
    }

    return 0;
}
