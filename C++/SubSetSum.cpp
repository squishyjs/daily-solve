#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

bool divisibleThree(int n) {
    return n % 3 == 0;
}

std::string solve(int n, std::vector<int> &arr) {
    //cook
    for (int i = 0; i < n; ++i) {
        int c = 0;
        for (int j = i; j < n; ++j) {
            int curr = arr[j];
 
            c += curr;

            if (divisibleThree(c)) {
                return "Yes";
            }
        }
    }
    return "No";
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
        std::string res = solve(n, arr);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
