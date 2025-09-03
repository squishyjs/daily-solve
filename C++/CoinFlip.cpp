#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int g;
        std::cin >> g;
        // for (int j = 0; j < g; ++j) {
            int i, n, q;
        //     std::cin >> i >> n >> q;
        // }
        // cook
        if (n % 2 == 0 || i == q) {
            std::cout << n/2 << std::endl;
        } else {
            std::cout << n/2 + 1 << std::endl;
        }
    }

    return 0;
}
