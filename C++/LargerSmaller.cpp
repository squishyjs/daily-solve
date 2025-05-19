#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

int solve(int n, std::vector<int> &arr) {
    int minA = *std::min_element(arr.begin(), arr.end());
    int maxA = *std::max_element(arr.begin(), arr.end());

    int count = 0;
    for (int i = minA+1; i < maxA; ++i) {
        count++;
    }

    return count;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        std::vector<int> arr(n);
        for (int &element : arr) {
            std::cin >> element;
        }
        int res = solve(n, arr);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
