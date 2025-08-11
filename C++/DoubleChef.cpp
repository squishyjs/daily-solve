#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>

int solve(int n)
{
    if ((n % 2) != 0) // if odd
    {
        return n - 1;
    }
    
    // else even
    return n;
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
