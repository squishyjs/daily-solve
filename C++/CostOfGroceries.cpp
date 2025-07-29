#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sgtty.h>

int solve(int n, int x, std::vector<int> &fresh, std::vector<int> &cost)
{
    int total = 0;
    for (int i = 0; i < n; ++i)
    {
        if (fresh[i] >= x)
        {
            total += cost[i];
        }
    }

    return total;
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n, x;
        std::cin >> n >> x;

        std::vector<int> fresh(n), cost(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> fresh[i];
        }

        for (int i = 0; i < n; ++i)
        {
             std::cin >> cost[i];
        }

        int res = solve(n, x, fresh, cost);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
