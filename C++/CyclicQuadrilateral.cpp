#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static std::string solve(const int a, const int b,
                         const int c, const int d) {

    bool first = (a + c == 180);
    bool second = (b + d == 180);
    if (first and second) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        std::cout << solve(a, b, c, d);
        std::cout << "\n";
    }

    return 0;
}
