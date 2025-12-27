#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdbool>

#define int64 long long
#define fastIO                              \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \

int64 profit(int buy, int sell) {
    return sell - buy;
}

int64 solve(int n, int a, int m, int b) {
    int buy = n * a;
    int sell = m * b;

    return profit(buy, sell);
}

int main() {
    fastIO;

    int n, a, m, b;
    std::cin >> n >> a >> m >> b;

    std::cout << solve(n, a, m, b);
    std::cout << std::endl;
    return 0;
}
