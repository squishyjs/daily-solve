#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>

int main() {
    int t; std::cin >> t;
    while (t--) {
        int r; std::cin >> r;
        int x1, y1, x2, y2, x3, y3;

        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int d12 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int d13 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
        int d23 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
        
        int total_d = d12 + d13 + d23;
        int max_d = std::max({d12, d13, d23});
        int min_d = std::min({d12, d13, d23});

        if (total_d - max_d - min_d <= r * r) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
        
    }

    return EXIT_SUCCESS;
}
