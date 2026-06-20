#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

static int solve(const int M, const int N) {
    int W = max(0, (N - M + 1) / 2);
    int D = N - 3 * W;
    int L = M - W - D;

    return L;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int m, n;
        std::cin >> m >> n;
        std::cout << solve(m, n);
        std::cout << "\n";
    }

    return 0;
}
