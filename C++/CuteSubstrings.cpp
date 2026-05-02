#include <cstddef>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n, const std::string &s) {
    // memoization array (DP)
    std::vector<int> dp(n, 0);

    int max_len = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'u' || s[i] == 'o') {
            dp[i] = 1;

            if (i >= 2 && s[i - 1] == 'w' && dp[i - 2] > 0) {
                dp[i] = dp[i - 2] + 2;
            }

            max_len = std::max(max_len, dp[i]);
        }
    }

    return max_len;
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
