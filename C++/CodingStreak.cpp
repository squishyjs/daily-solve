#include <climits>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \

using int64 = long long;

int64 solve(int n, std::vector<int> &arr) {

    int64 streak = INT_MIN;
    int64 curr_streak = 0;
    for (const int &x : arr) {
        if (x == 0) {
            curr_streak = 0;
        } else {
            curr_streak++;
        }

        streak = std::max(streak, curr_streak);
    }

    return streak;
}

int main(void) {
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

        std::cout << solve(n, arr);
        std::cout << "\n";
    }

    return 0;
}
