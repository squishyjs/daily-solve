#include <iostream>
#include <cmath>
#include <numeric>

int solve(int length, int breadth) {
    /* return the miniium number of square plots */
    int gcd = std::gcd(length, breadth);
    int a = length / gcd;
    int b = breadth / gcd;
    return a * b;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, m;
        std::cin >> n >> m;
        int res = solve(n, m);
        std::cout << res << std::endl;
    }
    return 0;
}
