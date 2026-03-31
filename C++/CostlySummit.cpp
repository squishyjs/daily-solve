#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n, const int c, std::string &s) {
    int freq[5] = {0, 0, 0, 0, 0};

    for (const char ch : s) {
        ++freq[ch - 'A'];
    }

    std::sort(freq, freq + 5, std::greater<int>());

    int ans = n * (n + 1) / 2; // learn nothing, use translator for everyone
    int learned_people = 0;

    for (int k = 1; k <= 5; ++k) {
        learned_people += freq[k - 1];
        const int remaining = n - learned_people;
        const int cost = k * c + (remaining * (remaining + 1)) / 2;
        ans = std::min(ans, cost);
    }

    return ans;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, c;
        std::cin >> n >> c;
        std::string s;
        std::cin >> s;

        std::cout << solve(n, c, s);
        std::cout << "\n";

    }

    return 0;
}
