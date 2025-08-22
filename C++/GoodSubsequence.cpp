#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>

bool isEven(int x) {
    return x % 2 == 0;
}

int solve(int n, std::vector<int> &arr) {
    if (n == 1) {
        return 1;
    }
    
    int longest = 0;
    for (int i = 1; i < n; ++i) {
        int temp = 1;
        for (int j = i; j < n; ++j) {

            if (arr[j] % 2 != (arr[j - 1] % 2)) {
                temp++;
            } else {
                break;
            }
        }
        longest = std::max(longest, temp);
    }

    return longest;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int res = solve(n, arr);
        std::cout << res << std::endl;
    }
    
    return EXIT_SUCCESS;
}
