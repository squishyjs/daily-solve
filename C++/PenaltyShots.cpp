#include <iostream>
#include <ostream>
#include <vector>

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int integers = 10;
        std::vector<int> scores_shot(integers);
        for (int i = 0; i < integers; ++i) {
            std::cin >> scores_shot[i];
        }
        int curr_team = 1;
        int team_even = 0, team_odd = 0;
        for (int i = 0; i < integers; ++i) {
            if (curr_team % 2 == 0) {
                if (scores_shot[i] == 1) {
                    team_even++;
                }
            } else {
                if (scores_shot[i] == 1) {
                    team_odd++;
                }
            }
            curr_team++;
        }
        if (team_even > team_odd) {
            std::cout << 2 << std::endl;
        } else if (team_odd > team_even) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }
    return 0;
}
