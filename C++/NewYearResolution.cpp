#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

#define ll long long
#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \

using int64 = long long;
static const int DAYS_OF_JANUARY = 31;

static int64 solve(int &x) {
    return x * 31;
}

int main(void) {
    int x;
    std::cin >> x;

    std::cout << solve(x) << "\n";

    return 0;
}
