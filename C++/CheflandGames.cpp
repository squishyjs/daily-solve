#include <iostream>


std::string solve() {
    int a, b, c, d;
    std::cin >> a >> b >> c >>d;
    const int OUT = 1;
    if (a == OUT || b == OUT || c == OUT || d == OUT) {
        return "OUT\n";
    }
    return "IN\n";
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        std::cout << solve();
    }
    return 0;
}
