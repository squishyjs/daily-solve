#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

std::string solve(int n, int x, int k,
                  std::vector<int> &ross,
                  std::vector<int> &russ)
{
    // cook
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (std::abs(ross[i] - russ[i]) <= k) {
            count++;
        }
    }

    if (count >= x) {
        return "YES";
    }

    return "NO";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x, k;
        std::cin >> n >> x >> k;
        std::vector<int> ross(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> ross[i];
        }
        std::vector<int> russ(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> russ[i];
        }

        std::string res = solve(n, x, k,
                                ross, russ);
        std::cout << res << std::endl;
    }

    return 0;
}
