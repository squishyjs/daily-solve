#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

void solve(int h, int m) {
    // cook code
    int total_minutes = h * m;
    int hours = total_minutes / 60;
    int minutes = (total_minutes) - (hours * 60);

    // print the solution
    std::cout << hours << " " << minutes;
    std::cout << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int h, m;
        std::cin >> h >> m;

        solve(h, m);
    }

    return 0;
}
