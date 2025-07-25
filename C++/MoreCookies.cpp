#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

int solve(int n, int c, std::vector<int> &arr)
{
    // std::sort(arr.begin(), arr.end());
    // int cookies = c;
    // for (int i = 0; i < n; ++i)     // 3 5 10 := 4
    // {
    //     cookies += 1;
    //     if (arr[i] < cookies)
    //     {
    //         for (int j = i; j < n; ++j)
    //         {
    //             if (arr[j] == cookies)
    //             {
    //                 break;
    //             }
    //         }

    //         return cookies;
    //     }
    // }

    int extra = 0;
    while (true)
    {
        int count = c + extra;

        bool equal = false, less = false;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == count)
            {
                equal = true;
            }

            if (arr[i] < count)
            {
                less = true;
            }
        }

        if (!equal && less)
        {
            return extra;
        }
        extra++;
    }
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n, c;
        std::cin >> n >> c;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }

        int res = solve(n, c, arr);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
