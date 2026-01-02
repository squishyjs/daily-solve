#include <algorithm>
#include <iostream>

int solve(int n, int m);

int main(void) {
    int n, m;
    std::cin >> n >> m;

    std::cout << solve(n, m);

    std::cout << "\n";

    return 0;
}

int solve(int n, int m) {
    return std::min(n, m - n);
}
