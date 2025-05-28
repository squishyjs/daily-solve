#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include <cstdlib>
#include <numeric>
#include <limits>

const int WINNER = 60;
const int LOSER = 40;

int solve(int x, std::string s) {
    int carlsen = 0, chef = 0, draw = 0;
    for (char game : s) {
        if (game == 'C') carlsen+=2;
        if (game == 'N') chef+=2;
        if (game == 'D') {
            carlsen++;
            chef++;
        }
    }
    if (carlsen > chef) {
        return WINNER * x;
    }
    if (carlsen < chef) {
        return LOSER * x;
    }
    return 55 * x;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int x; std::cin >> x;
        std::string s; std::cin >> s;
        int res = solve(x, s);
        std::cout << res;
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}
