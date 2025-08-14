#include <ios>
#include <iostream>
#include <cstdlib>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

int solve(int n, std::vector<int> &arr)
{
    // get the fences and their colours
    int maxColourFreq = 0;
    std::unordered_map<int, int> fences;
    for (const int &num : arr)
    {
        fences[num]++;
        if (fences[num] > maxColourFreq)
        {
            maxColourFreq = fences[num];
        }
    }

    // only one fence
    if (fences[1] == maxColourFreq)
    {
        return n - maxColourFreq;
    }

    return n - maxColourFreq + 1;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

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
