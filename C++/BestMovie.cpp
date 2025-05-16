#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <limits>

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int movies; std::cin >> movies;
        /* IDMB = rating between 1 - 10 */
        /* rating : cost */
        int min_cost = std::numeric_limits<int>::max();
        for (int i = 0; i < movies; ++i) {
            int rating, cost;
            std::cin >> rating >> cost;
            if (rating >= 7) {
                min_cost = std::min(min_cost, cost);
            }
        }
        if (min_cost != std::numeric_limits<int>::max()) {
            std::cout << min_cost << std::endl;
        } else {
            std::cout << -EXIT_FAILURE << std::endl;
        }
    }
    return EXIT_SUCCESS;
}
