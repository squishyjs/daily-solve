#include <cstdint>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <algorithm>


#define ll long long
#define fastIO                                  \
    std::ios_base::sync_with_stdio(false);      \
    std::cin.tie(NULL);                         \
    std::cout.tie(NULL);                        \


long long solve(int n) {
    ll cost = std::min(n * 200, 1000);
    return cost;
}

int32_t main() {
    fastIO;

    int n;
    std::cin >> n;

    std::cout << solve(n) << std::endl;
    return 0;
}
