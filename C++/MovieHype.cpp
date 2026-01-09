#include <climits>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);                  \

using int64 = long long;

int64 solve(int n, int seats,
              std::vector<int> &arr) {

    int max_loudness = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int curr = arr[i];
        int next = arr[i + 1];

        max_loudness = std::min(max_loudness, std::max(curr, next));
    }

    return max_loudness;
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        int seats = (n + 1);
        std::vector<int> arr(seats);
        for (int i = 0; i < seats; ++i) {
            std::cin >> arr[i];
        }

        int64 output = solve(n, seats, arr);
        std::cout << output << "\n";
    }

    return 0;
}
