#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

bool solve(std::string s) {
    return (
        s[0] == s[2] &&
        s[1] == 'w'
    );
}

int main() {
    std::string s;
    std::cin >> s;

    if (solve(s)) {
        std::cout << "Cute" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
