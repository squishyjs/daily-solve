#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);                  \

using int64 = long long;

int64 solve(int n, int a, int b, std::vector<int> &temp) {
    int wear = 0;
    bool jacket_on = false;

    for (const int &x : temp) {
        int curr_temp = x;
        if (curr_temp <= b && jacket_on) {
            continue;
        }

        if (curr_temp >= a && !jacket_on) {
            continue;
        }

        else {
            if (jacket_on && curr_temp > b) {
                jacket_on = false;
            } else if (!jacket_on && curr_temp < a) {
                jacket_on = true;
                wear++;
            }
        }
    }

    return wear;
}

int64 solve_2(int n, int a, int b, std::vector<int> &temp) {
    int wear = 0;
    bool jacket_on = false;

    for (const int &x : temp) {
        if (jacket_on && x > b) {
            jacket_on = false;
            continue;
        }

        if (!jacket_on && x < a) {
            wear++;

            jacket_on = true;
        }
    }

    return wear;
}

int main(void) {
    fastIO;

    int test;
    std::cin >> test;
    while (test--) {
        int n, a, b;
        std::cin >> n >> a >> b;

        std::vector<int> temp(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> temp[i];
        }

        std::cout << solve_2(n, a, b, temp);
        std::cout << "\n";
    }

    return 0;
}
