#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdlib>
#include <climits>

int solve(int n, std::vector<int> &arr) {
    int minTimeRequired = INT_MAX;
    // cook your dish here, John
    // need to find the minimum number of queue moves
    // in each move -1 each person from each queue
    // can only move to i - 1, or, i + 1 from each 
    // queue, if such an adjacent queue exists
    for (int i = 0; i < n; ++i) {
        int currQueueSize = arr[i];
        int totalTime;

        if (i == 0)
        {
            totalTime = currQueueSize;
        }
        else 
        {
            int peopleRemaining = std::max(0, currQueueSize - i + 1);
            totalTime = i + peopleRemaining;
        }

        // keep track of the min total time required
        minTimeRequired = std::min(minTimeRequired, totalTime);
    }

    return minTimeRequired;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
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
