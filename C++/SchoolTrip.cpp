#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int n, const int x, const int k) {
    int remove = x % k;
    int include = k - remove;

    if (include > (n - x)) {
        return remove;
    }

    return std::min(remove, include);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x, k;
        std::cin >> n >> x >> k;
        std::cout << solve(n, x, k);
        std::cout << "\n";
    }

    return 0;
}
