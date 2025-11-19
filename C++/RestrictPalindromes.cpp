#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>

std::string solve(int n) {
    if (n == 1) {
        return "a";
    }
    int len = n;
    std::string s = "abc", res;
    while (n--) {
        res += s;
    }

    return res.substr(0, len);
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {

        int n;
        std::cin >> n;

        std::string res = solve(n);
        std::cout << res << std::endl;
    }

    return 0;
}
