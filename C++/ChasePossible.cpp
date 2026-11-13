#include <iostream>
#include <string>
#include <algorithm>

static std::string solve(const int r, const int b)
{
    if (b * 6 >= r)
    {
        return "YES";
    }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int r, b;
    std::cin >> r >> b;
    std::cout << solve(r, b);
    std::cout << "\n";
    return 0;
}
