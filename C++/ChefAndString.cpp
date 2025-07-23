#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstdlib>

int solve(std::string s)
{
    // cook
    int length = s.length();

    int count = 0;
    for (int i = 0; i < length; ++i)
    {
        if (s[i] == 'x' && s[i + 1] == 'y' || s[i] == 'y' && s[i + 1] == 'x')
        {
            count++;

            i++;
        }
    }

    return count;
}

int main()
{
    int t; std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;

        int res = solve(s);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
