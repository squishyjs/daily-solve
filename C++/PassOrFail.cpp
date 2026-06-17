#include <ios>
#include <iostream>
#include <string>
#include <vector>

static std::string solve(const int n, const int x, const int p) {
    int right = x * 3;
    int wrong = (n - x);

    if ((right - wrong) >= p) {
        return "PASS";
    }

    return "FAIL";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x, p;
        std::cin >> n >> x >> p;
        std::cout << solve(n, x, p);
        std::cout << "\n";
    }

    return 0;
}
