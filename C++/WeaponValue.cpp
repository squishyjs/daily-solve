#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string res;
        std::map<char, int> hash_map;
        std::string s;
        for (int i = 0; i < n; ++i) {
            std::cin >> s;
            res += s;
        }

        int length = res.length();
        for (int i = 0; i < length; ++i) {
            if (res[i] == '1') {
                int c = i % 10;
                hash_map[c]++;
            }
        }

        int count = 0;
        for (const auto x : hash_map) {
            int a = x.second;
            if (a % 2 == 1) {
                count++;
            }
        }

        std::cout << count << std::endl;
    }

    return 0;
}
