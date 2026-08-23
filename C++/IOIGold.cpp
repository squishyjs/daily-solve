#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static std::string solve(const int n, const int g) {
    if (n >= g) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, g;
    std::cin >> n >> g;
    std::cout << solve(n, g);
    std::cout << "\n";

    return 0;
}
