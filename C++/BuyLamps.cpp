#include <algorithm>
#include <iostream>


int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, k, x ,y;
        std::cin >> n >> k >> x >> y;

        // int redLamps = k;

        // int minimumCost = (redLamps * x) + (blueLamps * y);
        // std::cout << minimumCost << std::endl;
        int redLamps = k;
        int blueLamps = n - redLamps;
        int minimumCost = (redLamps * x) + ((blueLamps) * std::min(x, y));
        std::cout << minimumCost << std::endl;
    }
    return 0;
}
