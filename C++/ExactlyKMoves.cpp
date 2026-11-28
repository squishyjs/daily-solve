#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

static std::string solve(const int n, const int k) {
    if (k > n)
    {
        return "NO";
    }

    if ((n >= k) && (n <= (2 * k)))
    {
        return "YES";
    }

    return "NO";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::cout << solve(n, k) << '\n';
    }

    return 0;
}
