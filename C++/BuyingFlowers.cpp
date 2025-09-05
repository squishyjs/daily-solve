#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

const int three_flowers = 3;
const int two_flowers = 2;

int solve(int n) { // let n = 8 -> 8 / 3 =
    int five_coins = n / three_flowers;
    int remainder = n - (five_coins * three_flowers);
    int four_coins = remainder / 2;

    if (n % 3 == 0) {
        return (n / three_flowers) * 5;
    } else if (n % 3 == 1) {
        return ((n / three_flowers) * 5) - 5 + 8;
    }

    return (five_coins * 5) + (four_coins * 4);
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int res = solve(n);
        std::cout << res << std::endl;
    }

    return 0;
}
