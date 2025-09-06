#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int solve(int x, int h) {
    // cook
    return (x - 4) * 24 + h;
}

int main() {
    int x, h;
    std::cin >> x >> h;

    int res = solve(x, h);
    std::cout << res << std::endl;
    return 0;
}
