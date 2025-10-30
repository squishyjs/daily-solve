#include <ios>
#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <algorithm>

int solve(int a, int b) {
    if (a == b) {
        return (a + b) - 1;
    }

    return a + b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;

        int res = solve(a, b);
        std::cout << res << std::endl;
    }

    return 0;
}
