#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static std::string solve(const int n,
        const std::string &a, const std::string &b)
{
    int a_count_a = std::count(a.begin(), a.end(), 'a');
    int b_count_a = std::count(b.begin(), b.end(), 'a');

    if (a_count_a + b_count_a != n)
        return "NO";

    return "YES";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::string a;
        std::cin >> a;
        std::string b;
        std::cin >> b;

        std::cout << solve(n, a, b);
        std::cout << "\n";
    }

    return 0;
}
