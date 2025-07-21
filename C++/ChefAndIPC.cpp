#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

int main() {
    // int t; std::cin >> t;
    // while (t--) {

    int n, m, k;
    std::cin >> n >> m >> k;

    int eligible = 0;
    for (int i = 0; i < n; ++i) {
        std::vector<int> arr(k);
        int sum = 0;

        for (int j = 0; j < k; ++j) {
            std::cin >> arr[j];

            sum += arr[j];
        }

        int questions;
        std::cin >> questions;

        if (sum >= m && questions <= 10)
        {
            eligible++;
        }
    }

    std::cout << eligible;
    std::cout << std::endl;
    // }

    return EXIT_SUCCESS;
}
