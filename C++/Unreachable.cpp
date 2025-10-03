#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <stdbool.h>

std::string solve(int n, std::vector<int> &arr) {
    // cook
    std::ios_base::sync_with_stdio(false);

    int e = 0, o = 0;
    for (int i = 0; i < n; i += 2) {
        if (arr[i] == 2) {
            e++;
        }
    }
    for (int i = 1; i < n; i += 2) {
        if (arr[i] == 2) {
            o++;
        }
    }

    if (e == (n + 1) / 2) {
        return "YES";
    }

    if (o == n / 2) {
        return "YES";
    }

    return "NO";
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
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::string res = solve(n, arr);
        std::cout << res << std::endl;
    }

    return 0;
}
