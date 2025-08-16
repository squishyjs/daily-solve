#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <climits>

int solve(int a, int b)
{
    // cook
    if (a == 1 and b == 1)
    {
        return 0;
    }

    return (a * b) - std::min(a, b);
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    int res = solve(a, b);
    std::cout << res << std::endl;

    return EXIT_SUCCESS;
}
