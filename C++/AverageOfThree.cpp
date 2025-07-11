#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>

void solve(int x) {
    // cook
    int target = x * 3;

    // std::cout << target / 2;  // integer floor
    std::cout << 1 << " " << 2 << " "<< target - 3;
    std::cout << std::endl;
}

int main() {
    int t; std::cin >> t;
    while (t--) {

        int x;
        std::cin >> x;

        solve(x);
    }

    return EXIT_SUCCESS;
}
