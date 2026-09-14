#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

// typedef long long ll;
// using ll = long long;
#define ll long long int

static int solve(const int a, const int b) {
    return std::min(a, b);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    // int t;
    // std::cin >> t;
    // while (t--) {
        int a, b;
        std::cin >> a >> b;
        std::cout << solve(a, b);
        std::cout << "\n";
    // }

    return 0;
}
