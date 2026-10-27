#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static std::string solve(const int a) {
    int sum = 0, num = a;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    if (sum % 10 == 0)
    {
        return "Valid";
    }

    return "Invalid";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int a;
        std::cin >> a;
        std::cout << solve(a);
        std::cout << "\n";
    }

    return 0;
}
