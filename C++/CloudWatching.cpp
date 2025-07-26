#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>

std::string solve(int a, int b)
{
    if (b >= a * 3)
    {
        return "Rain";
    }

    return "Dry";
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::string res = solve(a, b);
    std::cout << res << std::endl;
}
