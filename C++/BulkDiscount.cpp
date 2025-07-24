#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

int solve_one(int n, std::vector<int> &arr)
{
    // time limit exceeded on this one! (correct output)
    std::sort(arr.begin(), arr.end());

    int cost = 0;
    for (int i = 0; i < n; ++i)
    {
        cost += arr[i];

        for (int j = i; j < n; ++j)
        {
            if (arr[j] > 0)
            {
                arr[j]--;
                continue;
            }
        }
    }

    return cost;
}

int solve(int n, std::vector<int> &arr)
{
    std::sort(arr.begin(), arr.end()); // sort ascending

    long long cost = 0;
    for (int i = 0; i < n; ++i)
    {
        // each item gets i discount -> smart!
        int discount = std::max(0, arr[i] - i);
        
        cost += discount;
    }

    return cost;
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
