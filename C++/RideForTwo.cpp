#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static std::string solve(const int a, const int b,
                         const int c, const int x) {
    if ((a + b >= x) || (a + c >= x) || (b + c >= x))
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
        int a, b, c, x;
        std::cin >> a >> b >> c >> x;
        std::cout << solve(a, b, c, x);
        std::cout << "\n";
    }

    return 0;
}
