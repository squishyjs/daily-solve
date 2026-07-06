#include <iostream>
#include <string>

bool is_divisible_4(const int num) {
    if (num % 4 == 0) {
        return true;
    }

    return false;
}

static int solve(const int n) {
    int res;
    if (is_divisible_4(n)) {
        res = n + 1;
        return res;
    }

    // else
    res = n - 1;
    return res;
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
