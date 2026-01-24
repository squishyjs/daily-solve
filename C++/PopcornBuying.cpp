#include <iostream>
#include <string>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);

using int64 = long long;

int64 solve(int rupees) {
    const int TICKET = 100, POPCORN = 50;
    const int remainder = rupees - TICKET;

    if (remainder < POPCORN) {
        return 0;
    }

    return remainder / POPCORN;
}

int main(void) {
    fastIO;

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     int x;
    //     std::
    // }

    int x;
    std::cin >> x;

    std::cout << solve(x);

    return 0;
}
