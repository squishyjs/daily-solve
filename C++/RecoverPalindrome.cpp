#include <cstddef>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using int64 = long long;
using u64 = uint_fast64_t;

static std::string solve(const int n, std::string &s) {
    // PERF:
    bool unique = true;
    for (int i = 0; i < n / 2; ++i) {
        // get the opposite end of string
        int j = n  - 1 - i;
        if (s[i] == '?' && s[j] == '?') {
            unique = false;
            break;
        }
    }

    // EXAMPLE: aa?bb -> cannot be palindrome
    if (n % 2 == 1 and s[n / 2] == '?') {
        unique = false;
    }

    return unique ? "YES" : "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::cout << solve(n, s) << "\n";
    }

    return 0;
}
