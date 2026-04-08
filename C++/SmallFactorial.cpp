#include <cstdint>
#include <iostream>
#include <unordered_map>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::unordered_map<int, int64> memo;
int solve(int n) {
    // base
    if (n == 0 || n == 1) { return 1; }

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }


    return memo[n] = n * solve(n - 1);
}

int main(void) {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(NULL);
    // std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::cout << solve(n);
        std::cout << "\n";
    }

    return 0;
}
