#include <algorithm>
#include <ios>
#include <iostream>
#include <string>

bool is_chars(char x) {
    return x == 's';
}

std::string solve(std::string &s) {
    int n = s.length();
    std::transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c){ return std::tolower(c); });

    char i_first = s[0], i_last = s[n - 1];

    if (is_chars(i_first) || is_chars(i_last)) {
        return "Yes";
    }

    return "No";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string s;
    std::cin >> s;

    std::cout << solve(s);
    std::cout << "\n";

    return 0;
}
