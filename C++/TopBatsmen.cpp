#include <cmath>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <numeric>
#include <tuple>
#include <vector>
#include <cmath>

using namespace std;
const int people = 11;

long long factorial(int n) { // using memoization (caching fac(n - 1, ..))
    static std::vector<long long> memo = {1, 1};
    if (n < 0) {
        throw std::invalid_argument("n must be greater than 0.\n");
    }
    if (n < memo.size()) {
        return memo[n];
    }
    for (int i = memo.size(); i <= n; ++i) {
        memo.push_back(i * memo.back());
    }

    return memo[n];
}

int solve(vector<int>& a, int k) {
    sort(a.begin(), a.end());            // ascending
    int pivot = people - k;              // first of the chosen K
    int thr   = a[pivot];

    int c = 0, d = 0;
    for (int i = 0; i < people; ++i) {
        if (a[i] == thr) {
            ++c;
            if (i >= pivot) ++d;
        }
    }
    return (int)(factorial(c) /
                 (factorial(d) * factorial(c - d)));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        vector<int> bat(people);
        for (int& x : bat) cin >> x;
        int k; cin >> k;
        cout << solve(bat, k) << '\n';
    }
    return 0;
}
