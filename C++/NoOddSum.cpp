#include <condition_variable>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>
#include <algorithm>
#include <vector>

int solve(int n, std::vector<int> &arr) {

    int answer = INT_MAX;
    int ones = std::count(arr.begin(), arr.end(), 1);
    int twos = std::count(arr.begin(), arr.end(), 2);
    
    answer = twos;

    if (ones % 2 == 0) {
        answer = std::min(answer, ones / 2);
    }

    return answer;
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
