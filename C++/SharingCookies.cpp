#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int a, const int b) {
    int not_possible = -1;
    if ((a % 2) ^ (b % 2) == 0) {
        return std::abs(a - b) / 2;
    }

    return not_possible;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b;
    std::cin >> a >> b;
    std::cout << solve(a, b);
    std::cout << "\n";

    return 0;
}
