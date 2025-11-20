#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>
#include <unordered_map>

#define ll long long
#define fastIO                                                    \
    std::ios::sync_with_stdio(false);                             \
    std::cin.tie(NULL);                                           \
    std::cout.tie(NULL);                                          \
    // std::cout.precision(std::numeric_limits<double>);


ll solve(int n, std::vector<int> &arr) {
    // similar to two sum
    // 2 -> 2
    // 3 -> 1
    // 1 -> 3
    std::unordered_map<int, long long> freq;

    // Count occurrences using a hash map
    for (int x : arr) {
        freq[x]++;
    }

    ll c1 = freq[1];  // defaults to 0 if key not present
    ll c2 = freq[2];
    ll c3 = freq[3];

    ll keepTwos = (c2 > 0 ? 1 : 0);       // at most one '2'
    ll maxKept = std::max(c1, c3) + keepTwos;

    return n - maxKept;                          // deletions needed
}

int main() {
    // std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        ll output = solve(n, arr);
        std::cout << output << std::endl;
    }

    return 0;
}
