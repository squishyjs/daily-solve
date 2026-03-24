#include <ios>
#include <iostream>
#include <string>
#include <vector>

using int64 = long long;

int64 solve(int x, int y) {
    return x * 4 + y;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;

        std::cout << solve(x, y);
        std::cout << "\n";
    }

    return 0;
}
