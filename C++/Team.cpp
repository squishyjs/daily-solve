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

int main(void) {
    int n;
    std::cin >> n;

    int count = 0, one;
    for (int i = 0; i < n; ++i) {
        one = 0;

        int a, b, c;
        std::cin >> a >> b >> c;

        if (a == 1) one++;
        if (b == 1) one++;
        if (c == 1) one++;

        if (one >= 2) {
            count++;
        }
    }

    std::cout << count << "\n";

    return 0;
}
