#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>

std::string solve(int n, int x,
                  std::vector<int> &candA, std::vector<int> &candB)
{
    // cook
    std::vector<int> losses;
    int wins = 0;
    for (int i = 0; i < n; ++i)
    {
        if (candB[i] >= candA[i])
        {
            int difference = candB[i] - candA[i];
            int required = difference + 1;

            losses.push_back(required);
        } else {
            wins++;
        }
    }
    
    // sort for min vote delegation (efficiency)
    std::sort(losses.begin(), losses.end());

    // check if already winning, skip 
    if (wins > (n / 2))
    {
        return "YES";
    }
    
    // otherwise check x factor distribution from Chef
    for (int i = 0; i < losses.size(); ++i)
    {
        if (x >= losses[i])
        {
            x -= losses[i];
            wins++;
        }
    }
    
    if (wins > (n / 2))
    {
        return "YES";
    }

    return "NO";
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n, x;
        std::cin >> n >> x;

        std::vector<int> candA(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> candA[i];
        }

        std::vector<int> candB(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> candB[i];
        }

        std::string res = solve(n, x, candA, candB);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
