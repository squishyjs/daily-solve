#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

std::string leftShift(std::string s) {
    return s.substr(1, s.length() - 1) + s.substr(0, 1);
}

std::string rightShift(std::string s) {
    return s.back() + s.substr(0, s.length() - 1);
}

std::string solve(std::string s) {
    // cook your code
    int length = s.length();
    if (length == 1 || length == 2) {
        return "YES";
    }

    // manually check
    if (leftShift(s) == rightShift(s)) {
        return "YES";
    }

    return "NO";
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::string s;
        std::cin >> s;

        std::string res = solve(s);
        std::cout << res << std::endl;
    }

    return 0;
}
