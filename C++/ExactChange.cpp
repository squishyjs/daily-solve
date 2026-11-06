#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int n) {
    int ones = n % 5;
    if (n < 5)
    {
        return ones;
    }

    return ones + (n / 5);
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
