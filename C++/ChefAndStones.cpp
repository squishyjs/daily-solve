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

int solve(int n1, int n2, int m) {
    long long S = 1LL * m * (m + 1) / 2;           // ensure 64-bit multiplication
    long long r = std::min(S, 1LL * std::min(n1, n2)); // cast to long long before comparing
    long long ans = 1LL * n1 + n2 - 2 * r;         // keep result in long long
    return (int)ans;                               // cast back to int for return
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n1, n2, m;
        std::cin >> n1 >> n2 >> m;

        int res = solve(n1, n2, m);
        std::cout << res << std::endl;
    }

    return 0;
}
