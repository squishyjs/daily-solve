#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int solve(int n, std::vector<int> &arrA, std::vector<int> &arrB)
{
    // cook
    int c = 0;
    for (int i = 0; i < n; ++i) {
        int required = arrA[i];
        int supply = arrB[i];

        if (supply < required) {
            int cost = required - supply;

            c += cost;
        }
    }

    return c;
}

int main() {
    int t; std::cin >> t;
    while (t--) {

        int n; std::cin >> n;

        std::vector<int> arrA(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arrA[i];
        }

        std::vector<int> arrB(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arrB[i];
        }
        
        int res = solve(n, arrA, arrB);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
