#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static std::string solve(const int x, const int y) {
    if (y * 30 <= x) {
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
        int a, b;
        std::cin >> a >> b;
        std::cout << solve(a, b);
        std::cout << "\n";
    }

    return 0;
}
