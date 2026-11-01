#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

bool secure(const int x, const int y)
{
    return x - y == 0;
}

static std::string checkPassword(int arr[], int n)
{
    int sum = 0, length = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        length++;
    }

    if (secure(sum, length))
    {
        return "SECURE";
    }

    return "NOT SECURE";
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
    // std::string s;
    // std::cin >> s;
    // std::cout << solve(s);
    // std::cout << "\n";

    return 0;
}
