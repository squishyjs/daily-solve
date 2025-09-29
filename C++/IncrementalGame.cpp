#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

std::string solve(int x, int y, int k) {
    if (((x - k)  <= k && y <= k) || ((y - k) <= k && x <= k)) {
        return "Alice";
    }

    return "Bob";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y, k;
        std::cin >> x >> y >> k;

        std::string res = solve(x, y, k);
        std::cout << res << std::endl;
    }

    return 0;
}
