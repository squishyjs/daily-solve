#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \

using u32 = uint32_t;
using u64 = uint64_t;
using int64 = long long;

int64 solve(int n, std::string &s) {
    // lower case string
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c) { return std::tolower(c); });


    int64 f_max = 0L, s_max = 0L;
    std::unordered_map<char, int> freq;
    for (const char c : s) {
        freq[c]++;
    }

    int64 first = 0, second = 0;
    for (const auto& [c, f] : freq) {
        if (f > first) {
            second = first;
            first = f;
        } else if (f > second && f < first) {
            second = f;
        }
    }

    int64  max_occurrences = first + second;

    return max_occurrences;
}

int main(void) {
    fastIO;

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
