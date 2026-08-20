#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n, const std::vector<int> &arr) {
    int odd = 0, even = 0;
    for (const int &x : arr) {
        if (x % 2 == 0)
        {
            even++;
            continue;
        }

        odd++;
    }

    int least = std::min(odd, even);
    int result = 2 * least + (odd != even ? 1 : 0);

    return result;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

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
