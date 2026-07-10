#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

static int solve(const int n, std::vector<int> &arr) {
    int min = 0;
    for (int i = 0; i < n - 1; ++i) {
        min = std::max(min, std::min(arr[i], arr[i + 1]));
    }

    return min;
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
