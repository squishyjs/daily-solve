#include <iostream>
#include <string>
#include <algorithm>

static std::string solve(const int x) {
    // PERF:
    int target_digit = 7;
    int temp = x;

    while (temp > 0) {
        int currDigit = temp % 10;

        if (currDigit == target_digit)
        {
            return "YES";
        }

        temp /= 10;
    }

    return "NO";
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
