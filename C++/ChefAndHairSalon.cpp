#include <iostream>


void solve(int &n, int &m) {
    std::cout << n * m;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, m;
        std::cin >> n >> m;
        solve(n, m);
        std::cout << std::endl;
    }
    return 0;
}
