#include <functional>
#include <ios>
#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>
#include <limits>

int solve(int n, std::vector<int> &arr) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());

    int f_burner = 0, s_burner = 0;
    for (int i = 0; i < n; ++i) {
        if (f_burner < s_burner) {
            f_burner += arr[i];
        } else {
            s_burner += arr[i];
        }
    }

    return std::max(f_burner, s_burner);
}

int main() {
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

        int res = solve(n, arr);
        std::cout << res << std::endl;
    }

    return 0;
}
