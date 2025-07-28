#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>

int solve(int n, std::string s)
{
    /*
    * Count the number of possible str flips by choosing
    * a prefix s[o, n], where 'n' is the subset size of
    * len(s) (i.e. 1 <= n <= len(s)). A permutation
    * problem
    */

    int count = 0;
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            zeros++;
        } else {
            ones++;
        }

        if (ones == zeros && zeros != 0)
        {
            count++;
        }

    }

    return 1 << count;
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        std::string s;
        std::cin >> s;

        int res = solve(n, s);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
