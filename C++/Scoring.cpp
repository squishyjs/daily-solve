#include <cstdint>
#include <ios>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long
#define fastIO                               \
    std::ios::sync_with_stdio(false);        \
    std::cin.tie(NULL);                      \
    std::cout.tie(NULL);                     \


void solve(int x, int y) {
    int bob = (y - x) / 2 ;
    int alice = y - bob;

    std::cout << alice << " " << bob;
}

int32_t main() {
    fastIO;

    int t;  // test cases
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;

        solve(x, y);
        std::cout << std::endl;
    }

    return 0;
}
