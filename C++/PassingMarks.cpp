#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <algorithm>

std::string solve(int Amin, int Bmin, int Cmin, int Tmin, int a, int b, int c) {
    bool passA = a >= Amin;
    bool passB = b >= Bmin;
    bool passC = c >= Cmin;
    int cumulative = (a + b + c) >= Tmin;
    if (passA and passB and passC and cumulative) {
        return "YES";
    }
    return "NO";
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int Amin, Bmin, Cmin, Tmin, a, b, c;
        std::cin >> Amin >> Bmin >> Cmin >> Tmin >> a >> b >> c;
        std::string res = solve(Amin, Bmin, Cmin, Tmin, a, b, c);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
