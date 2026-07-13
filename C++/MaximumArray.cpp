#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n, const std::vector<int> &arr) {
    return *std::max_element(arr.begin(), arr.end());
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        std::cout << solve(n, arr);
        std::cout << "\n";
    }

    return 0;
}
