#include <cctype>
#include <cstddef>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

std::string solve(std::string str);

int main() {
    int t; std::cin >> t;
    while (t--) {
        std::string str;
        std::cin >> str;

        std::string res = solve(str);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}

bool isVowel(char c) {
    c = tolower(c);

    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::string solve(std::string str)
{
    size_t length = str.length();
    std::string copetown = "COPETOWN";

    if (str == copetown)
    {
        return "YES";
    }

    // check characters
    for (size_t i = 0; i < length; ++i) {
        char m = copetown[i];
        char c = str[i];

        if (isVowel(m) && !isVowel(c) || !isVowel(m) && isVowel(c))
        {
            return "NO";
        }
    }
    
    return "YES";
}
