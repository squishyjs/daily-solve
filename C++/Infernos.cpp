#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <climits>

int solve(int n, int x, std::vector<int> &health)
{
    // cook
    // int enemies = health.size();
    // if (x >= n)
    // {
    //     return n;
    // }
    
    int total = 0;
    for (const int &element : health)
    {
        total += (element + (x - 1)) / x;
    }

    int maxHealth = *std::max_element(health.begin(), health.end());
    return std::min(maxHealth, total);
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, x;
        std::cin >> n >> x;

        std::vector<int> health(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> health[i];
        }

        int res = solve(n, x, health);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
