#include <ios>
#include <iostream>
#include <string>

static std::string solve(const std::string &s) {
    const int length = s.length();
    char first = s[0], last = s[length - 1];

    if (first == 'c' or last == 'f') {
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
