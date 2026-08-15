#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int n, const int m, const int x) {
    int row = ((x - 1) / m) + 1;
    int front = row;
    int back = n - row + 1;

    return std::min(front, back);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m, x;
        std::cin >> n >> m >> x;
        std::cout << solve(n, m, x);
        std::cout << "\n";
    }

    return 0;
}
