#include <iostream>
#include <algorithm>
#include <string>

#define DRAW "Draw"
#define CHEF "Chef"
#define CHEFINA "Chefina"

std::string solve(int x, int y, int p, int q) {
    int chef_penalty = x + p * 10;
    int chefina_penalty = y + q * 10;
    if (chef_penalty < chefina_penalty) {
        return CHEF;
    }
    if (chefina_penalty < chef_penalty) {
        return CHEFINA;
    }
    return DRAW;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int x, y, p, q;
        std::cin >> x >> y >> p >> q;
        std::string res = solve(x, y, p, q);
        std::cout << res << std::endl;
    }
    return 0;
}
