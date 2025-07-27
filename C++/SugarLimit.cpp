#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

int solve(int n, std::vector<int> &arrT, std::vector<int> &arrS)
{
    // cook
    int totalSat = 0;

    for (int i = 0; i < n; ++i)
    {
        int l = arrS[i];
        int taste = 0;

        for (int j = 0; j < n; ++j)
        {
            if (arrS[j] <= l && arrT[j] > 0)
            {
                taste += arrT[j];
            }
        }

        int s = taste - l;
        if (s > totalSat)
        {
            totalSat = s;
        }
    }

    return totalSat;
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> arrT(n), arrS(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arrT[i];
        }

        for (int i = 0; i < n; ++i)
        {
             std::cin >> arrS[i];
        }

        int res = solve(n, arrT, arrS);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
