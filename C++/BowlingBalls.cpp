#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

int solve(int n, int x, int y, std::vector<int> &arr)
{
    int balls = 0;
    for (const auto &ball : arr)
    {
        if (ball >= x && ball <= y)
        {
            balls++;
        }
    }

    return balls;
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n, x, y;
        std::cin >> n >> x >> y;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }

        int res = solve(n, x, y, arr);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
