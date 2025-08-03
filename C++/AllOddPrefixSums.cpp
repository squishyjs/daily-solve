#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isOdd(int x)
{
    return x % 2 == 1;
}

std::string solve(int n, std::vector<int> &arr)
{
    // need to find tihe aciutal prefix value for each element : array:
    // find_;;std:;svecto<int_string:
    // ///coor toher wise cook the values
    // need equal or at least k-1 number of odd elements in the array as
    // they are number of k even elements
    int odd = 0, even = 0;
    for (int i = 0; i < n; ++i)
    {
        if (isOdd(arr[i]))
        {
            odd++;
        }
    }

    if (odd == 1)
    {
        return "Yes";
    }
    
    return "No";
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }

        std::string res = solve(n, arr);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
