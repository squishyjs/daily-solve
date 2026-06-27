#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const int n, const int k) {
    if (k == 1) {
        return n;
    }

    int pass = (n - 1) / k;
    return 1 + pass * k;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::cout << solve(n, k);
        std::cout << "\n";
    }

    return 0;
}
