#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

int solve(int a, int b, int c)
{
    // cook
    int totalCost = b + c;
    int price = a;

    return price - totalCost;
}

int main()
{
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int res = solve(a, b, c);
    std::cout << res << std::endl;

    return EXIT_SUCCESS;
}
