#include <algorithm>
#include <iostream>
#include <string>

const int OVERS = 20;

std::string solve(int runs, int overs, int scores) {
    int remaining_overs = OVERS - overs;
    int max_plays = (remaining_overs * 6) * 6;
    if (max_plays + scores > runs) {
        return "YES";
    }
    return "NO";
}

int main() {
    int r, o, c;
    std::cin >> r >> o >> c;
    std::string res = solve(r, o, c);
    std::cout << res << std::endl;
    return 0;
}
