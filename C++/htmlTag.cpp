#include <cstddef>
#include <iostream>
#include <string>
#include <cctype>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);                  \

using int64 = long long;

const bool tag_check(char f, char s, char l) {
    return f == '<' and s == '/' and l == '>';
}

std::string solve(const std::string &s) {
    size_t n = s.size();

    if (n < 4) return "Error";

    if (!tag_check(s[0], s[1], s[n - 1])) {
        return "Error";
    }

    for (size_t i = 2; i + 1 < n; ++i) {       // body is [2, n-2]
        unsigned char c = static_cast<unsigned char>(s[i]);
        if (!(std::isdigit(c) || std::islower(c))) {
            return "Error";
        }
    }
    return "Success";
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;

        std::cout << solve(s);
        std::cout << "\n";
    }

    return 0;
}
