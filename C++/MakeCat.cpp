#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>
#include <climits>

std::string solve(std::string s)
{
    bool c = false, a = false, t = false;
    for (const auto &letter : s)
    {
        if (letter == 'c')
        {
            c = true;
        }
        if (letter == 'a')
        {
            a = true;
        }
        if (letter == 't')
        {
            t = true;
        }
    }

    if (c and a and t)
    {
        return "Yes";
    }

    return "No";
}

int main()
{
    std::string cat;
    std::cin >> cat;

    std::string res = solve(cat);
    std::cout << res << std::endl;

    return EXIT_SUCCESS;
}
