#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static bool not_vowel(const char c) {
    const char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    for (const char &a : vowels) {
        if (c == a) {
            return false;
        }
    }

    return true;
}

static std::string solve(const int n, const std::string &s) {
    int count = 0, final = 0;
    for (int i = 0; i < n; ++i) {
        if (not_vowel(s[i])) {
            count++;
            final = std::max(final, count);
        } else {
            count = 0;
        }
    }

    return (final >= 4) ? "Yes" : "No";
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
