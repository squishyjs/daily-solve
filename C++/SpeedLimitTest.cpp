#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static std::string solve(const float a, const float b,
                         const float x, const float y) {
    // TODO:
    float alice = a / x;
    float bob = b / y;

    if (alice > bob) {
        return "ALICE";
    }

    if (bob > alice) {
        return "BOB";
    }

    return "EQUAL";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        float a, b, x, y;
        std::cin >> a >> b >> x >> y;

        std::cout << solve(a, b, x, y);
        std::cout << "\n";
    }

    return 0;
}
