#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

std::string solve(int a, int b, int c) {
    
    bool areaTrue = (a * b) == (c * c);
    if (areaTrue)
    {
        return "Yes";
    }

    return "No";
}

int main() {
    // int t; std::cin >> t;
    // while (t--) {
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::string res = solve(a, b, c);
    std::cout << res << std::endl;
    // }
    return EXIT_SUCCESS;
}
