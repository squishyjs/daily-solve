#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);

void print_container(std::vector<int> &arr) {
    for (const auto x : arr) {
        std::cout << x << " ";
    }

    std::cout << "\n";
}

std::vector<int> solve(int n, int k, std::vector<int> &arr) {
    // need to rotate array 'k' times
    k = k % n;

    std::vector<int> result;
    result.reserve(n);

    for (int i = 0; i < n; ++i) {
        int new_index = (i + k) % n;
        result.push_back(arr[new_index]);
    }

    return result;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::vector<int> result = solve(n, k, arr);
        print_container(result);
        std::cout << "\n";
    }

    return 0;
}
