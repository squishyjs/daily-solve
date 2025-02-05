#include <iostream>

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, k, m;
        std::cin >> n >> k >> m; // n candies, k pockets, each hold m candies
        
        int minimumBags = n / (k * m);
        if (n % (k * m) == 0) {
            std::cout << minimumBags << std::endl;
        } else {
            std::cout << minimumBags + 1 << std::endl;
        }
    }

    return 0;
}
