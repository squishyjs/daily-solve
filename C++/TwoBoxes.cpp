#include <cstdlib>
#include <iostream>


void solve(int x, int y, int k) {
    // int seconds = 0;
    // int abDifference;
    // while (x > 0) {
    //     abDifference = std::abs(x - y);
    //     if (abDifference == k) {
    //         break;
    //     }
    //     //update stones in boxes
    //     x--; y++;
    //     seconds++;
    // }
    // if (abDifference != k) {
    //     seconds = -1;
    // }
    int seconds;
    if (std::abs(k - std::abs(x - y)) % 2 == 0) {
        seconds = std::abs(k - std::abs(x - y)) / 2;
    } else {
        seconds = -1;
    }
    std::cout << seconds << std::endl;
}


int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x, y, k;
        std::cin >> x >> y >> k;

        solve(x, y, k);
    }
    return 0;
}
