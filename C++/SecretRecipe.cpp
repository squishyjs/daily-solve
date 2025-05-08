#include <iostream>
#include <string.h>

std::string solve(int x1, int x2, int x3, int v1, int v2) {
    int kefa, chef;
    kefa = abs(x2 - x3) / v2;
    chef = abs(x3 - x1) / v1;
    if (kefa < chef) {
        return "Kefa";
    }
    if (chef == kefa) {
        return "Draw";
    }
    return "Kefa";
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x1, x2, x3, v1, v2;
        std::cin >> x1 >> x2 >> x3 >> v1 >> v2;
        std::string res = solve(x1, x2, x3, v1, v2);
        std::cout << res << std::endl;
    }
    return 0;
}
