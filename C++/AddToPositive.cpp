#include <cstdlib>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>


#define ll long long
#define fastIO                                  \
    std::ios_base::sync_with_stdio(false);      \
    std::cin.tie(NULL);                         \
    std::cout.tie(NULL);                         \


long long solve(int n, std::vector<int> &arr) {
    ll sum = std::accumulate(arr.begin(), arr.end(), 0LL);
    if (sum >= 0)
    {
        return 0;
    }

    return ((std::abs(sum) + n - 1) / n);
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

        ll output = solve(n, arr);
        std::cout << output << std::endl;
    }

    return 0;
}
