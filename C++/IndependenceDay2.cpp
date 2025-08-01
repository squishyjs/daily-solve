#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int solve(int x)
{
    if (x > 15)
    {
        return -1;
    }

    return 15 - x;
}

int main()
{
    int x; std::cin >> x;
    int res = solve(x);
    std::cout << res << std::endl;

    return EXIT_SUCCESS;
}
