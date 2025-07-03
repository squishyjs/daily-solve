#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <cstdlib>

std::string solve(int a, int b)
{
    // cook here
    if (a == 0) {
        return "No";
    }

    if (b % a == 0) {
        return "Yes";
    }

    // otherwise
    return "No";
}

int main()
{
    int t; std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;

        std::string res = solve(a, b);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
