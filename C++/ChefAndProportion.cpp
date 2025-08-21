#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <string>
#include <vector>

std::string solve(int a, int b, int c, int d)
{
    // a/b = d/c
    // ad = bc

    bool perm1 = a * b == d * c;
    bool perm2 = a * c == d * b;
    bool perm3 = a * d == b * c;
    if (perm1 || perm2 || perm3)
    {
        return "Possible";
    }

    return "Impossible";
}

int main()
{
    // int t;
    // std::cin >> t;
    // while (t--)
    // {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    std::string res = solve(a, b, c, d);
    std::cout << res << std::endl;
    // }

    return EXIT_SUCCESS;
}
