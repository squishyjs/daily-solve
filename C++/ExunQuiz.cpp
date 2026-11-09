#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

static int solve(const int n, const int s) {
    int correct = (s + 3) / 4;
    int attempts = (5 * correct) - s;

    if (attempts <= n) {
        return attempts;
    }

    return -1;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, s;
        std::cin >> n >> s;
        std::cout << solve(n, s);
        std::cout << "\n";
    }

    return 0;
}
