#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cmath>

int intLength(int num)
/* gets the numerical length of an integer, num (int) */
{
    if (num == 0)
        return 1;

    num = std::abs(num);
    return static_cast<int>(std::log10(num)) + 1;
}

void solve(int k, int n,
           std::vector<std::string> &luckyString,
           std::vector<std::string> &pillowString)
{
    for (int i = 0; i < n; ++i)
    {
        bool found = false;
        for (int j = 0; j < k; ++j)
        {
            if (pillowString[i].find(luckyString[j]) != std::string::npos)
            {
                std::cout << "Good" << std::endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            if (pillowString[i].length() >= 47)
                std::cout << "Good" << std::endl;
            else
                std::cout << "Bad" << std::endl;
        }
    }
}

int main()
{
    int k, n;
    std::cin >> k >> n;

    std::vector<std::string> luckyString(k);
    for (int i = 0; i < k; ++i)
    {
        std::cin >> luckyString[i];
    }

    std::vector<std::string> pillowString(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> pillowString[i];
    }

    solve(k, n, luckyString, pillowString);

    return EXIT_SUCCESS;
}
