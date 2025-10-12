#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int a) {
    return 7 - a;
}

int main() {
    int a;
    std::cin >> a;

    int res = solve(a);
    std::cout << res << std::endl;

    return 0;
}
