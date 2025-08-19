#include <iostream>
#include <numeric>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <vector>

std::string solve(int n, int c, std::vector<int> &arr) {
    int total = std::accumulate(arr.begin(), arr.end(), 0);

    if (c >= total)
    {
        return "Yes";
    }

    return "No";
}

int main() {
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, c;
        std::cin >> n >> c;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }

        std::string res = solve(n, c, arr);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
