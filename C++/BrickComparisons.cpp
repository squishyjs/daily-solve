#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <climits>

int solve(int n, std::vector<int> &bricks)
{
    // cook
    int index = 1;
    int currBrick = bricks[0];
    for (int i = 1; i < n; ++i)
    {
        if (bricks[i] > currBrick)
        {
            currBrick = bricks[i];
            index = i + 1;
        }
    }

    return index;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> bricks(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> bricks[i];
        }
        int res = solve(n, bricks);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
