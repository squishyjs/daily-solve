#include <climits>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);

using int64 = long long;

int64 solve(int n, std::vector<int> &arr) {
    std::unordered_map<int, int> mp;
    for (const int &x : arr) {
        mp[x]++;
    }

    int best_el = INT_MAX;
    int best_freq = -1;

    for (const auto &it : mp) {
        int val = it.first;
        int freq = it.second;

        if (freq > best_freq || (freq == best_freq && val < best_el)) {
            best_freq = freq;
            best_el = val;
        }
    }

    return best_el;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << solve(n, arr);
        std::cout << "\n";
    }

    return 0;
}
