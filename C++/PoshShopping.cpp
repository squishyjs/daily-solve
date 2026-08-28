#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n, std::vector<int> &arr) {
    int best = 0;
    int suffix_max = -1;                 // max of arr[j] over j > i
    for (int i = n - 1; i >= 0; --i) {
        best = std::max(best, arr[i]);   // buy arr[i] alone
        if (suffix_max >= arr[i]) {      // a later item is at least as expensive
            best = std::max(best, arr[i] + suffix_max);
        }
        suffix_max = std::max(suffix_max, arr[i]);
    }
    return best;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
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
