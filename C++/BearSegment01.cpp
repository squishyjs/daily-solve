#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cstdlib>

// TODO: PARTIALLY CORRECT
std::string solve(std::string s) {
    int length = 0;
    bool one_again = false;
    bool one = false;
    for (const char c : s) {
        if (c == '0' && one) {
            one_again = true;
        }

        if (c == '1') {
            one = true;
            length++;
            if (one_again) {
                return "NO";
            }
        }
    }

    if (length > 1) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;

        std::string res = solve(s);
        std::cout << res << std::endl;
    }

    return 0;
}
