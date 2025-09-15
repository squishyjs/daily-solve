#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

#define ROCK    'R'
#define PAPER   'P'
#define SCISSOR 'S'

bool won_rps(int c, int ci) {
    switch (c) {
        case 'R':
            if (ci == ROCK) {
                return true;
            }
            if (ci == PAPER) {
                return false;
            }
            if (ci == SCISSOR) {
                return true;
            }
        case 'P':
            if (ci == ROCK) {
                return true;
            }
            if (ci == PAPER) {
                return true;
            }
            if (ci == SCISSOR) {
                return false;
            }
        case 'S':
            if (ci == ROCK) {
                return false;
            }
            if (ci == PAPER) {
                return true;
            }
            if (ci == SCISSOR) {
                return true;
            }
        default:
            std::cout << "Soemthing went wrong\n";
            std::cout << std::endl;
            exit(1);
    }
}

int solve(int n, std::string a, std::string b) {
    // R = rock
    // P = paper
    // S = scissors
    // what's the minimum number of games chef should have played differently to have won?
    int chef_win = 0, chefina_win= 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            continue;
        }
        if (won_rps(a[i], b[i])) {
            chef_win++;
        } else {
            chefina_win++;
        }
    }

    // already winning: edge case 1
    if (chef_win > chefina_win) {
        return 0;
    }

    // same points: edge case 2
    if (chef_win == chefina_win) {
        return 1;
    }

    int min_win = 0;
    while (chef_win <= chefina_win) {
        chef_win++;
        chefina_win--;
        min_win++;
    }

    return min_win;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string a, b;
        std::cin >> a >> b;

        int res = solve(n, a, b);
        std::cout << res << std::endl;
    }
    return 0;
}
