#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>

int solve(int n, std::string string) {
    int c = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (string[i] == string[i + 1]) {
            c++;
        }
    }
    return c;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::string s;
        std::cin >> s;

        int res = solve(n, s);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
