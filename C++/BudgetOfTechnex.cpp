#include <ios>
#include <iostream>
#include <algorithm>

static int solve(const int r) {
    int allocated = r / 2;

    return allocated / 5;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << solve(n * 1000);
        std::cout << "\n";
    }

    return 0;
}
