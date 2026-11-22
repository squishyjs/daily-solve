#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

static char solve(const std::string &s) {
    int freq[26] = {0};

    for (char c : s) {
        if (isalpha(static_cast<unsigned char>(c))) {
            c = tolower(static_cast<unsigned char>(c));
            freq[c - 'a']++;
        }
    }

    int maxFreq = 0;
    char ans = 'a';

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            ans = 'a' + i;
        }
    }

    return ans;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    std::getline(std::cin, s);

    std::cout << solve(s) << '\n';

    return 0;
}
