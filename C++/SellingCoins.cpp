#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int solve(int a, int b) {
    return a + (b * 2);
}

int main() {

    int a, b;
    std::cin >> a >> b;
    int res = solve(a, b);
    std::cout << res << std::endl;

    return 0;
}
