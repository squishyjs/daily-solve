#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

static int solve(const int n, const int a, const int b)
{
    if (n < a)
    {
        return n;
    }

    return (b + (n - a) % (a - b));
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
    {
        int n, a, b;
        std::cin >> n >> a >> b;
        std::cout << solve(n, a, b);
        std::cout << "\n";
    }

    return 0;
}
