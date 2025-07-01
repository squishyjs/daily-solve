#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

std::string solve(int n, std::string &gestures) {
    for (const char &gesture : gestures) {
        if (gesture == 'I') {
            return "INDIAN";
        }
        if (gesture == 'Y') {
            return "NOT INDIAN";
        }
    }
    return "NOT SURE";
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::string gestures;
        std::cin >> gestures;
        
        std::string res = solve(n, gestures);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
