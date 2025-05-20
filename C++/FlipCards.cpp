#include <iostream>
#include <algorithm>

int solve(int n, int x) {
    if (x == 0 or n == x) {
        return 0;
    }
    int cards = n;
    int facingUp = x;
    int facingDown = n - x;
    return std::min(facingDown, facingUp);
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int n, x; std::cin >> n >> x;
        int res = solve(n, x);
        std::cout << res << std::endl;
    }
    return 0;
}
