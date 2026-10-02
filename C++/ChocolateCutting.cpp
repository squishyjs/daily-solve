#include <iostream>
#include <string>
#include <algorithm>

bool isEven(const int x) {
    return x % 2 == 0;
}

static std::string solve(const int n, const int m) {
    if (isEven(n * m))
    {
        return "Yes";
    }

    return "No";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::cout << solve(n, m);
        std::cout << "\n";
    }

    return 0;
}
