#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

const std::string COOKIE = "cookie";
const std::string MILK   = "milk";

std::string solve(int n, std::vector<std::string> &arr) {
    std::stack<std::string> cookies;

    for (const std::string &food : arr) {
        if (food == MILK) {
            if (!cookies.empty()) {
                cookies.pop();
            }
            continue;
        }
        if (food == COOKIE) {
            if (!cookies.empty()) {
                return "NO";
            }
            cookies.push(food);
        }
    }
    // final check
    if (!cookies.empty()) {
        return "NO";
    }

    return "YES";
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::vector<std::string> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        std::string res = solve(n, arr);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
