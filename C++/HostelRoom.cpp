#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

int solve(int n, int x, std::vector<int> &arr) {
    int maxx = x;
    int temp = maxx;
    for (int i = 0; i < n; ++i) {
        int curr = arr[i];
        temp += curr;

        maxx = std::max(maxx, temp);
    }

    return maxx;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n;
        std::cin >> x;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int res = solve(n, x, arr);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
