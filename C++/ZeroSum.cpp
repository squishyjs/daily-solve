#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>

std::vector<int> solve(int n) {
    std::vector<int> arr;

    if (n == 1) {
        arr.push_back(-1);
        return arr;
    }
    else if (n % 2 == 0) {
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                arr.push_back(1);
            } else {
                arr.push_back(-1);
            }
        }
    }
    else {
        for (int i = 0; i < n - 3; ++i) {
            if (i % 2 == 0) {
                arr.push_back(1);
            }
            else {
                arr.push_back(-1);
            }
        }
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(-3);
    }

    return arr;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;

        std::vector<int> res = solve(n);

        for (int i = 0; i < n; ++i) {
            std::cout << res[i] << " ";
        }

        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}
