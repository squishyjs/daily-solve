#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

std::string solve(int n) {

    int cw = 0, sm = 0, easy = 0, em = 0, me = 0, mh = 0, h = 0;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;

        if (s == "cakewalk") {
            cw++;
        } else if (s == "simple") {
            sm++;
        } else if (s == "easy") {
            easy++;
        } else if (s == "easy-medium" || s == "medium") {
            em++;
            me++;
        } else if (s == "medium-hard" || s == "hard") {
            mh++;
        }
    }

    if (cw == 1 and sm == 1 and easy == 1 and (em >= 1 || me >= 1) and (mh >= 1 || h >= 1)) {
        return "Yes";
    }

    return "No";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::string res = solve(n);
        std::cout << res << std::endl;
    }

    return 0;
}
