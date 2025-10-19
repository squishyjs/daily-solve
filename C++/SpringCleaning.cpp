#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

const int SMALL = 30;
const int LARGE = 60;

int solve(int x, int y) {
    return (x * SMALL) + (y * LARGE);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int x, y;
    std::cin >> x >> y;

    int res = solve(x, y);
    std::cout << res << std::endl;

    return 0;
}
