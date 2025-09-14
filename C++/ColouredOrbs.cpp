#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int r, int b) {
    int green = std::min (r, b);
    r = r - green;
    b = b - green;

    return green * 5 + r + b * 2;
}

int main() {
    int r, b;
    std::cin >> r >> b;
    int res = solve(r, b);
    std::cout << res << std::endl;
    return 0;
}
