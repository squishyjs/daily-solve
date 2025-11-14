#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>


int solve(int x, int y) {
    return (x * 3) + (y * 2);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int x, y;
    std::cin >> x >> y;
    int output = solve(x, y);
    std::cout << output << std::endl;
    return 0;
}
