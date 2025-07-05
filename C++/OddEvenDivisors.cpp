#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

void solve(int n) {
    // cook
    int odd = 0, even = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0)
        {
            if (i % 2 == 0)
            {
                even++;
            } else {
                odd++;
            }
        }
    }
    
    std::cout << odd << " " << even;
    std::cout << std::endl;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;

        solve(n);
    }

    return EXIT_SUCCESS;
}
