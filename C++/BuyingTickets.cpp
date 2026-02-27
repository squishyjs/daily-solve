#include <iostream>
#include <memory_resource>
#include <string>
#include <vector>
#include <algorithm>

using int64 = long long;

int64 solve(int n, int k, std::string &s, std::vector<int> &arr) {
    int64 TOTAL_COST = 0;
    int64 zeros = std::count(s.begin(), s.end(), '0');
    int64 ones = k - zeros;

    if (zeros < k) {
        return -1;
    }

    std::vector<int> seat_costs;
    seat_costs.reserve(n);
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            seat_costs.push_back(arr[i]);
        }
    }

    std::sort(seat_costs.begin(), seat_costs.end());
    for (int i = 0; i < k; ++i) {
        TOTAL_COST += seat_costs[i];
    }

    return TOTAL_COST;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::string s;
        std::cin >> s;

        std::cout << solve(n, k, s, arr);
        std::cout << "\n";
    }

    return 0;
}
