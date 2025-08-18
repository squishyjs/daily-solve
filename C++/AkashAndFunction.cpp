#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <climits>

int solve(int n)
{
    // cook
    if (n % 2 == 0)
    {
        return n / 2;
    }

    return ((n / 2) + 1);
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        int res = solve(n);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
