#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

std::string solve(int x, int y) {
    return ((x * y) >= 100) ? "YES" : "NO";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int x, y;
    std::cin >> x >> y;
    std::string res = solve(x, y);
    std::cout << res << std::endl;
    return 0;
}
