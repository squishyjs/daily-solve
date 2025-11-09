#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>


bool is_even(int x) {
    return x % 2 == 0;
}

int solve(int n, int a) {
    // n-squares
    // with side-length: a

    long long m = sqrt(n);
    return m * a;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, a;
        std::cin >> n >> a;

        int res = solve(n ,a);
        std::cout << res << std::endl;
    }

    return 0;
}
