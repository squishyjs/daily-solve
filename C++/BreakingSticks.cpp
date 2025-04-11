#include <algorithm>
#include <iostream>


int solve(int &n, int* sticks) {
    int breaks = 0;
    for (int i = 0; i < n; ++i) {
        if (sticks[i] > 1) {
            int curr = sticks[i];
            breaks += (curr - 1);
        }
    }
    return breaks;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        int sticks[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> sticks[i];
        }
        std::cout << solve(n, sticks) << std::endl;
    }
    return 0;
}
