#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;

        int res = 0;
        int a = (x + y) / 3;
        if (x <= y) {
            res = a * 2;
        } else {
            res = std::min(a * 2, a + y);
        }

        std::cout << res << std::endl;
    }

    return 0;
}
