#include <algorithm>
#include <iostream>

void solve(int players) {
    int maxScore = 0;
    int maxScorePlayer = 0;
    for (int i = 1; i <= players; ++i) {
        int a, b;
        std::cin >> a >> b;
        if ((a + b * 20) > maxScore) {
            maxScore = a + b * 20;
            maxScorePlayer = i;
        }
    }
    std::cout << maxScorePlayer << std::endl;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int players = 22;
        solve(players);
    }
    return 0;
}
