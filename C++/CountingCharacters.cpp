#include <algorithm>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>

using u32 = uint32_t;
using u64 = uint_fast64_t;

static void solve(const int n, const std::string &s) {
    int a = std::count(s.begin(), s.end(), 'a');
    int b = std::count(s.begin(), s.end(), 'b');

    std::cout << a << " " << b;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        solve(n, s);
        std::cout << "\n";
    }

    return 0;
}
