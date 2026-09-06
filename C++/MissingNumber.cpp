#include <iostream>
#include <string>

static int solve(const int s) {
    return 10 - s;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int s;
    std::cin >> s;
    std::cout << solve(s);
    std::cout << "\n";

    return 0;
}
