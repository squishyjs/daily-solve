#include <iostream>
#include <vector>

std::string solve(int n, std::vector<int> &attackA, std::vector<int> &defenseA,
                  std::vector<int> &attackB, std::vector<int> &defenseB) {

    int attA = 0, defA = 0;
    int attB = 0, defB = 0;
    for (int i = 0; i < n; ++i) {
        attA += attackA[i];
        defA += defenseA[i];
        attB += attackB[i];
        defB += defenseB[i];
    }
    if (attA > attB && defA > defB) {
        return "A";
    } else if (attA < attB && defA < defB) {
        return "P";
    } else {
        return "DRAW";
    }
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        std::vector<int> attackA(n), defenseA(n), attackB(n), defenseB(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> attackA[i];
            std::cin >> defenseA[i];
            std::cin >> attackB[i];
            std::cin >> defenseB[i];
        }
        std::string result = solve(n, attackA, defenseA, attackB, defenseB);
        std::cout << result << std::endl;
    }
    return 0;
}
