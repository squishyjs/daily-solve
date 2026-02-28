#include <cstdint>
#include <iostream>
#include <string>

using u32 = uint32_t;

static std::string solve(const std::string &s) {
    u32 length = s.length();

    char a = s[length - 1];
    char t = s[length - 2];
    char n = s[length - 3];

    if (a != 'a' or t != 't' or n != 'n') {
        return "NO";
    }

    return "YES";
}

int main(void) {

    std::string s;
    std::cin >> s;

    std::cout << solve(s);

    return 0;
}
