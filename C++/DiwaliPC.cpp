#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

static std::string solve(const int p, const int d,
                         const int k, const int b) {
    if (b >= (p + d * k))
    {
        return "YES";
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
        int p, d, k, b;
        std::cin >> p >> d >> k >> b;
        std::cout << solve(p, d, k, b);
        std::cout << "\n";
    }

    return 0;
}
