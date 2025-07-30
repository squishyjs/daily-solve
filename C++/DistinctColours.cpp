#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int solve(int n, std::vector<int> &arr)
{
    auto maxValue = std::max_element(arr.begin(), arr.end());
    int maxV = *maxValue;

    return maxV;
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n; std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }

        int res = solve(n, arr);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
