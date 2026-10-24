#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static std::string findLeagueWinner(const int A, const int M) {
    if (A > M)
    {
        return "TEAM A";
    }

    if (M > A)
    {
        return "TEAM M";
    }

    return "DRAW";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, m;
    std::cin >> a >> m;
    std::cout << findLeagueWinner(a, m) << "\n";

    return 0;
}
