#include <cassert>
#include <cctype>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

#define ll long long
#define fastIO                  \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \


bool is_pangram(const std::string &s) {
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    size_t a_size = alphabet.size();

    std::unordered_set<char> seen_letters;
    // int count = 0;
    for (const char c : s)
    {
        if (std::isalpha(c))
        {
            seen_letters.insert(std::tolower(c));
        }
    }

    return seen_letters.size() == a_size;
}

int main(void) {
    std::string t = "The quick, brown fox jumps over the lazy dog!";

    if (is_pangram(t)) std::cout << "true";
    else std::cout << "false";

    std::cout << std::endl;

    return 0;
}
