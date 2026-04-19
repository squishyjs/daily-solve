#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int64 solution(const int n, const int k) {
    const int BRIBE_AMOUNT = 60;

    int first_total = n * 100;
    int second_total = (k + n * BRIBE_AMOUNT);

    return std::min(first_total, second_total);
}

static void solve() {
    int n, k;
    std::cin >> n >> k;

    std::cout << solution(n, k) << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // PERF:
    solve();

    return 0;
}
