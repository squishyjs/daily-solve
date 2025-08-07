#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cstdlib>

int solve(int n, int k, int v, std::vector<int> &arr)
{
    // cook
    int length = n + k;
    int average = v;

    int currSum = 0;
    for (const int &element : arr)
    {
        currSum += element;
    }

    int remainingSum = (average * length) - currSum;
    if (remainingSum > 0 && remainingSum % k == 0)
    {
        return remainingSum / k;
    }
    
    return -1;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k, v;
        std::cin >> n >> k >> v;
        
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }

        int res = solve(n, k, v, arr);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
