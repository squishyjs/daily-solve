#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static std::string solve(const std::string &s) {
    if (s[0] == s[2] and s[1] == s[3]) {
        return "Yes";
    }

    return "No";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin >> s;
    std::cout << solve(s);
    std::cout << "\n";
    return 0;
}
