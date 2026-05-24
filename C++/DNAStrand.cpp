#include <cstdint>
#include <ios>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::string solve(const int n, const std::string &s) {
    std::map<char, char> m = {
        {'A', 'T'},
        {'T', 'A'},
        {'C', 'G'},
        {'G', 'C'}
    };

    std::string res;
    for (const char &x: s) {
        res += m[x];
    }

    return res;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::cout << solve(n, s);
        std::cout << "\n";
    }

    return 0;
}
