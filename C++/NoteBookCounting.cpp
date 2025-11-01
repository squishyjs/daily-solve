#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int solve(int a, int b) {
    return 100 * a * b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    // int t;
    // std::cin >> t;
    // while (t--) {
        int a, b;
        std::cin >> a >> b;

        int res = solve(a, b);
        std::cout << res << std::endl;
    // }

    return 0;
}
