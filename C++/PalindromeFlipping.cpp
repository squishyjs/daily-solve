#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string solve(int n, std::string s) {
    // select two indices i and i, flip Si and Sj,
    int one = 0, zero = 0;
    for (const char c : s) {
        if (c == '1') {
            one++;
        } else {
            zero++;
        }
    }
    if (one % 2 != 0 && zero % 2 != 0) {
        return "NO";
    }
    return "YES";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::string res = solve(n, s);
        std::cout << res << std::endl;
    }

    return 0;
}
