#include <iostream>
#include <algorithm>

int solve(int s, int l, int xl,
          int ws, int wl, int wxl) {
    int total = 0, sum = 0;
    total = std::min(xl, wxl);
    sum = std::max(0, xl - wxl);
    total += std::min(l + sum, wl);

    sum = std::max(0, (l + sum) - wl);
    total += std::min(s + sum, ws);

    return total;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int s, l, xl, ws, wl, wxl;
        std::cin >> s >> l >> xl >> ws >> wl >> wxl;
        int res = solve(s, l, xl, ws, wl, wxl);
        std::cout << res << std::endl;
    }
    return 0;
}
