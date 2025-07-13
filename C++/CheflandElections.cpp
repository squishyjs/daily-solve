#include <iostream>
#include <string>
#include <sys/types.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdlib>

bool majority(int votes)
{
    return votes > 50;
}

std::string solve(int a, int b, int c)
{
    if (majority(a) && !majority(b) && !majority(c))
    {
        return "A";
    }
    if (!majority(a) && majority(b) && !majority(c))
    {
        return "B";
    }
    if (!majority(a) && !majority(b) && majority(c))
    {
        return "C";
    }

    return "NOTA";
}

int main() {

    int t; std::cin >> t;
    while (t--) {

        int a, b, c;
        std::cin >> a >> b >> c;

        std::string res = solve(a, b, c);
        std::cout << res;
        std::cout << std::endl;

    }

    return EXIT_SUCCESS;
}
