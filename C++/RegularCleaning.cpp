#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n) {
    return 10 - (n % 10);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::cout << solve(n);
    std::cout << "\n";

    return 0;
}
