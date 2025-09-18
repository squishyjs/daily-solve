#include <cctype>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

bool not_in_freq(std::string name,
                 std::unordered_map<char, int> &freq)
{
    for (char c : name) {
        if (isalpha(c)) {
            c = tolower(c);

            if (freq[c] > 0) {
                freq[c]--;
            } else {
                return true;
            }
        }
    }

    return false;
}

std::string solve(int n,
                  std::string a,
                  std::string b,
                  std::vector<std::string> &names)
{
    std::string c = a + b;
    std::unordered_map<char, int> freq;
    for (char ch : c) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            freq[ch]++;
        }
    }

    // brute force check
    for (const auto &name : names) {
        // TODO:
        // check concatenation
        if (not_in_freq(name, freq)) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string a, b;
        std::cin >> a >> b;
        int n; std::cin >> n;

        std::vector<std::string> names(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> names[i];
        }

        std::string res = solve(n, a, b, names);
        std::cout << res << std::endl;
    }

    return 0;
}
