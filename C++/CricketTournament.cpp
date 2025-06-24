#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdlib>

std::string solve(int n, int m) {
    if (n - 1 >= m) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::string res = solve(n, m);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
