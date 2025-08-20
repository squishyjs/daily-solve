#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <vector>
#include <string>

int solve(int n,
          std::vector<int> &goals, std::vector<int> &fouls)
{
    // cook
    int score = 20, foul = 10;
    int maxPoints = 0;
    for (int i = 0; i < n; ++i)
    {
        int currGoal = goals[i];
        int currFoul = fouls[i];
        int player = (currGoal * score) - (currFoul * foul);
    
        maxPoints = std::max(player, maxPoints);
    }

    return maxPoints;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> goals(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> goals[i];
        }

        std::vector<int> fouls(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> fouls[i];
        }

        int res = solve(n, goals, fouls);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
