#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

int solve(std::vector<int> &judges) {
    int summ = 0;
    for (int &score : judges) {
        summ += score;
    }
    if (summ >= 35) {
        return 0;
    }
    std::sort(judges.begin(), judges.end());
    int coins = 0;
    for (int i = 0; i < judges.size() && summ < 35; ++i) {
        summ += (10 - judges[i]);
        coins += 100;
    }
    return coins;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        std::vector<int> judges(5);
        for (int i = 0; i < judges.size(); ++i) {
            std::cin >> judges[i];
        }
        int res = solve(judges);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
