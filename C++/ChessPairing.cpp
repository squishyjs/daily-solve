#include <algorithm>
#include <iostream>


int main() {

    int testcases;
    std::cin >> testcases;
    while (testcases--) {
        //cook your c++
        int n, x;
        std::cin >> n >> x;
        int numberOfPlayers = 2 * n;
        int rated = x;
        int unrated = numberOfPlayers - x;

        if (rated == 0) {
            std::cout << 0 << std::endl;
            continue;
        }
        if (rated == numberOfPlayers) {
            std::cout << rated << std::endl;
            continue;
        }
        std::cout << std::max(0, rated - (numberOfPlayers - rated)) << std::endl;
    }
    return 0;
}
