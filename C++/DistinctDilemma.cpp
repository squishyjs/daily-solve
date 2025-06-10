#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int solve(int n, std::vector<int> &arr) {
    //return the maximum number of distinct indices in the array and swap them
    //given that i != y j

    //a recursive call per se?

    
    return 0;
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
