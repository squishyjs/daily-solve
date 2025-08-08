#include <climits>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

int solve(int n, std::vector<int> &arr)
{
    // cook   
    int min = INT_MAX;
    for (int i = 0; i < n - 1; ++i)
    {
        int firstVase = arr[i];
        int secondVase = arr[i + 1] / 2;

        min = std::min(firstVase + secondVase, min);
    }
    
    std::sort(arr.begin(), arr.end());
    int firstMin = arr[0], secondMin = arr[1];
    // for (const int &x : arr)
    // {
    //     if (x != firstMin)
    //     {
    //         secondMin = x;
    //         break;
    //     }
    // }

    if (firstMin + secondMin < min)
    {
        return firstMin + secondMin;
    }

    return min;
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
        std::cout << res;
        std::cout << std::endl;

    }

    return EXIT_SUCCESS;
}
