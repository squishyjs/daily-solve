#include <iostream>
#include <string>

typedef std::string String;

String solve(String &string, int string_size) {
    /* cook your dish here */
    bool found = false;
    for (int i = 0; i < string_size - 1; ++i) {
        char el = string[i];
        char last_el = string[string_size - 1];
        if (el == last_el) {
            found = true;
            break;
        }
    }
    return (found ? "YES" : "NO");
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        String s; std::cin >> s;
        std::string result = solve(s, n);
        std::cout << result << std::endl;
    }
    return 0;
}
