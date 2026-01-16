#include <iostream>
#include <vector>
#include <string>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);                  \

using int64 = long long;

bool solve(int &x, int &y) {
    return x >= y;
}

int main(void) {
    fastIO;

    int x, y;
    std::cin >> x >> y;

    std::cout << (solve(x, y) ? "YES" : "NO");
    std::cout << "\n";

    return 0;
}
