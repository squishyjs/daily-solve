#include <iostream>

using int64 = long long;

int64 solve(int n, int m) {
    /*
    *  n = no. of friends
    *  m = left shoes chef has
    */
    int total_required = n * 2;

    if (m >= n) {
        return n;
    }

    return total_required - m;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::cout << solve(n, m);
        std::cout << "\n";
    }

    return 0;
}
