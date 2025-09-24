#include <functional>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

void print_vector(std::vector<int> &vec) {
    for (const int & x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

std::vector<int> solve(int n,
                     std::vector<int> &arr) {
    for (int i = 0; i + 1 < n; ++i) {
        if ((i % 2 == 0 && arr[i] > arr[i + 1]) ||
            (i % 2 == 1 && arr[i] < arr[i + 1]))
        {
            std::swap(arr[i], arr[i + 1]);
        }
    }

    return arr;
}

int main() {
    // desync C
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        std::vector<int> res = solve(n, arr);
        print_vector(res);
    }

    return 0;
}
