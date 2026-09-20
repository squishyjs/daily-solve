#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static std::string solve(const int n, const int k) {
    // PERF:
    // for permutation there can't exist (n - 1) fixed points
    // as the Nth term will always be n
    // so either k is > n -1, or < n - 1

    int res = n - 1;
    return (k == res) ? "No" : "Yes";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t) {
        int n, k;
        std::cin >> n >> k;
        std::cout << solve(n, k);
        std::cout << "\n";
    }
    return 0;
}
