#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

static std::string solve(const int n)
{
    if (n % 4 == 0)
    {
        return "NO";
    }

    return "YES";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::cout << solve(n);
        std::cout << "\n";
    }

    return 0;
}
