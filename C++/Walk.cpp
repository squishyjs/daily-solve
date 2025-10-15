#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int solve(int n, std::vector<int> &arr) {
    int max_vel = 0;
    for (int i = 0; i < n; ++i) {
        max_vel = std::max(max_vel, arr[i] + i);
    }

    return max_vel;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> shops(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> shops[i];
        }

        int res = solve(n, shops);
        std::cout << res << std::endl;
    }

    return 0;
}
