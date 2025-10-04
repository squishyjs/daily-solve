#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n, int a, int b) {
    return n - (a * b);
}

int main() {
    // int t;
    // std::cin >> t;
    // while (t--) {
        int n, a, b;
        std::cin >> n >> a >> b;
        int res = solve(n, a, b);
        std::cout << res;
        std::cout << std::endl;
    // }

    return 0;
}
