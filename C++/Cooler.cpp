#include <iostream>
#include <mutex>
#include <vector>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static u32 solve(int n, int m) {
    // PERF:

    int count = 0;
    while (n != m) {
        count += n;
        n -= 1;
    }

    return count;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::cout << solve(n, m);
        std::cout << "\n";
    }

    return 0;
}
