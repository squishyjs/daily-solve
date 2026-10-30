#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

static std::string solve(const std::string &s)
{
    // std::string res;
    // res += s[0];
    // res += s[2];
    // res += s[4];

    return {s[0], s[2], s[4]};
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--)
    // {
    //     int n;
    //     std::cin >> n;
    //     std::string s;
    //     std::cin >> s;
    //     std::cout << solve(n, s);
    //     std::cout << "\n";
    // }
    std::string s;
    std::cin >> s;
    std::cout << solve(s);
    std::cout << "\n";

    return 0;
}
