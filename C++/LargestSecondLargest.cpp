#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>

int solve(int n, std::vector<int> &arr) {
    std::set<int> sortedArr(arr.begin(), arr.end());
    auto it = sortedArr.rbegin();
    int largest = *it;
    // printf("Largest is: %d.\n", largest);
    ++it;
    int secondLargest = *it;
    // printf("Second largest is: %d\n", secondLargest);
    return largest + secondLargest;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        int res = solve(n, arr);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
