#include <iostream>
#include <string>
#include <vector>

static int solve(const int n, const int k, const std::vector<int> &arr) {
    int count = 0;
    for (const int &x : arr) {
        if ( x > k ) {
            count++;
        }
    }

    return count;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        std::cout << solve(n, k, arr);
        std::cout << "\n";
    }

    return 0;
}
