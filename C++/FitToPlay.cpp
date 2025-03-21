#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> goals(n);
    for (int i = 0; i < n; ++i) { 
        std::cin >> goals[i];
    }

    //cook your c++
    int maxScore = 0;
    int minSoFar = goals[0];
    for (int i = 0; i < n; ++i) {
        // std::cout << "Goal scored: " << goals[i] << " ";
        // int currentGoal = goals[i];
        // int nextGoal = goals[i + 1];
        // if (nextGoal > currentGoal) {
        //     maxScore = std::max(maxScore, (nextGoal - currentGoal));
        // }
        int currentGoal = goals[i];
        maxScore = std::max(maxScore, currentGoal - minSoFar);
        //update minimum found goal
        minSoFar = std::min(minSoFar, currentGoal);
    }
    // std::cout << std::endl;
    if (maxScore == 0) {
        std::cout << "UNFIT\n";
    } else {
        std::cout << maxScore << std::endl;
    }
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}
