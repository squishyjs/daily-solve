#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;

int64 solve(int n, int x) {
    int tv_cost = x;
    int number_of_purchasees = n % 2;

    return tv_cost * number_of_purchasees;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;

        std::cout << solve(n, x);
        std::cout << "\n";
    }

    return 0;
}
