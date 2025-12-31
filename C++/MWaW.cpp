#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define fastIO                            \
    ios::sync_with_stdio(false);          \
    cin.tie(nullptr);                     \
    cout.tie(nullptr);

using int64 = long long;

std::vector<int> solve(int init, int left, int limit);
std::vector<int> solve(int init, int left, int limit) {
    // TODO:
}

int main(void) {
    fastIO;

    int a, b, c;
    std::cin >> a >> b >> c;

    std::vector<int> output = solve(a, b, c);
    for (const int &x : output) {
        std::cout << x << " ";
    }

    std::cout << "\n";
    return 0;
}
