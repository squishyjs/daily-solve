#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>

int solve(int l, int k)
{
    // cook
    if (l % k == 0) // nani??
    {
        return 0;
    }

    return 1;
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int l, k;
        std::cin >> l >> k;
        int res = solve(l, k);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
