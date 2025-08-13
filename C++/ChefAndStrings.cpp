#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <climits>

int solve(int n, std::vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int curr = arr[i];
        int currNext = arr[i + 1];

        int diff = std::abs(curr - currNext) - 1;
        if (diff > 0)
        {
            count += diff;
        }
    }

    return count;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

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
