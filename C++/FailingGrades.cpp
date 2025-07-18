#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string solve(int n, std::vector<int> &arr) {
    // cook
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i]; 

        double avg = (double) total / (i + 1);
        if (avg < 40) {
            return "No";
        }
    }

    return "Yes";
}

int main() {
    int t; std::cin >> t;
    while (t--) {

        int n; std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::string res = solve(n, arr);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
