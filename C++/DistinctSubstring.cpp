#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

std::string solve(int n, int k) {
    int no_of_substring_islands = (k * (k + 1) / 2) + k - 1;

    if (no_of_substring_islands <= n) {
        return "YES";
    }

    return "NO";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::string res = solve(n, k);
        std::cout << res << std::endl;
    }

    return 0;
}
