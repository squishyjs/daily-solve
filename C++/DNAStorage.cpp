#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <cstdlib>

std::string solve(int n, std::string s) {
    std::unordered_map<std::string, char> dict;
    dict["00"] = 'A';
    dict["01"] = 'T';
    dict["10"] = 'C';
    dict["11"] = 'G';

    std::string res;
    int length = s.length();
    for (int i = 0; i < length; i += 2) {
        std::string subStr = s.substr(i ,2);
        if (dict.find(subStr) != dict.end()) {
            res += dict[subStr];
        }
    }

    return res;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::string res = solve(n, s);
        std::cout << res << std::endl;
    }

   return 0;
}
