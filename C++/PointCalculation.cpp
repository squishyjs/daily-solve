#include <iostream>
#include <string>
#include <vector>

static int solve(const int a, const int b, const int c) {
    int wins = a * 3 + b;
    return wins;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << solve(a, b, c);
    std::cout << "\n";

    return 0;
}
