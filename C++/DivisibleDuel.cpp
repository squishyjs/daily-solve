#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

bool is_even(int x) {
    return x % 2 == 0;
}

std::string solve(int x, int y) {
    int even = 0, odd = 0;
    for (int i = x; i <= y; ++i) {
        if (i % x == 0) {
            if (is_even(i)) {
                even += i;
            } else {
                odd += i;
            }
        }
    }

    if (even >= odd) {
        return "YES";
    }

    return "NO";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;

        std::string res = solve(x, y);
        std::cout << res << std::endl;
    }

    return 0;
}
