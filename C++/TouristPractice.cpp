#include <atomic>
#include <iostream>
#include <random>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>


int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, a, b;
        std::cin >> n >> a >> b;

        int start_sum = a + b;
        int min_distance = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x, y;
            std::cin >> x >> y;

            int new_min = std::abs(a - x) + std::abs(b - y);
            min_distance = std::min(min_distance, new_min);
        }

        std::cout << min_distance << std::endl;
    }

    return 0;
}
