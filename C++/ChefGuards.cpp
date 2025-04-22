#include <algorithm>
#include <iostream>

void solve(int first, int second) {
    int min = first, max = second;
    max = min + max;
    min = std::max(first, second);
    std::cout << min << " " << max << std::endl;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int a, b; std::cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
