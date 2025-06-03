#include <cstdlib>
#include <iostream>
#include <ostream>
#include <vector>
#include <algorithm>
#include <string>

int solve(int n, int k) {
    //cook
    if (n % k == 0) {
        return n / k;
    }
    return (n / k) + 1;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int n, k; std::cin >> n >> k;
        int res = solve(n, k);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
