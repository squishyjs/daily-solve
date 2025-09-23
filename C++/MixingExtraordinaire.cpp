#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

// #define ll long long int
using ll = long long int;

ll solve(ll n, std::vector<ll> &arr) {
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            ll perm = arr[i] * arr[j];
            sum += perm;
        }
    }

    return sum;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        ll n;
        std::cin >> n;
        std::vector<ll> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        ll res = solve(n, arr);
        std::cout << res << std::endl;
    }

    return 0;
}
