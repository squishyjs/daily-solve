#include <iostream>
#include <algorithm>
#include <string>

std::string solve(int A1, int A2, int B1, int B2) {
    int netA = A1 - A2;
    int netB = B1 - B2;
    int NET = netA + netB;
    if (NET < 0) {
        return "YES";
    }
    return "NO";
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int a1, a2, b1, b2;
        std::cin >> a1 >> a2 >> b1 >> b2;
        std::string res = solve(a1, a2, b1, b2);
        std::cout << res << std::endl;
    }
    return 0;
}
