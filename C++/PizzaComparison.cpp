#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define fastIO                               \
    std::ios_base::sync_with_stdio(false);   \
    std::cin.tie(NULL);                      \
    std::cout.tie(NULL);                     \

using namespace std;
using int64 = long long;


std::string solve(int a, int b);
std::string solve(int a, int b) {
    float small = 100;
    float large = 225;

    if (large / b > small / a) {
        return "Large";
    }

    if (small / a > large / b) {
        return "Small";
    }

    return "Equal";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;

        std::string output = solve(a, b);
        std::cout << output;
        std::cout << "\n";
    }

    return 0;
}
