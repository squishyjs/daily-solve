#include <iostream>
#include <cstdlib>
#include <numeric>
#include <ostream>
#include <string>
#include <vector>

std::string solve(int n, std::string s, std::string t)
{
    // cook
    // int one = 0, count = 0;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        char string_s = s[i];
        char string_t = t[i];

        if (string_s != string_t)
        {
            // if (string_s == '0')
            // {
            //     return "No";
            // }
            // one++;

            if (string_s == '1')
            {
                count++;
                t[i] = '1';
            }
        }
    }

    if (count % 2 == 0 && s == t) {
        return "Yes";
    }

    return "No";
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;   // length
        std::string S, T;
        std::cin >> S >> T;

        std::string res = solve(n, S, T);
        std::cout << res;
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}
