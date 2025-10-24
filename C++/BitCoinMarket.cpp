#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

std::string solve(int r) {
    if (r <= 4) {
        return "YES";
    }

    return "NO";
}

int main() {
    // int t;
    // std::cin >> t;
    // while (t--) {
    int r;
    std::cin >> r;

    std::string res = solve(r);
    std::cout << res << std::endl;

    return 0;
}
