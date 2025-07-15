#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>

int solve(int n, int m) {
    // cook
    const int COST = 30;
    int expense = COST * n;

    const int PRICE = 50;
    int profit = PRICE * m;

    return (profit - expense);
}

int main() {
    // int t; std::cin >> t;
    // while (--t) {

        int n, m;
        std::cin >> n >> m;

        int res = solve(n, m);
        std::cout << res << std::endl;

    // }

    return EXIT_SUCCESS;
}
