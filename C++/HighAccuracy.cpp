#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>

int solve(int x) {
    // cook
    int questions = 100;
    int total = questions * 3;

    if (x % 3 == 0) {
        return 0;
    }

    int count = 0;
    while (x % 3 != 0) {
        x += 1;

        count++;
    }
    return count;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int x; std::cin >> x;
        int res = solve(x);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
