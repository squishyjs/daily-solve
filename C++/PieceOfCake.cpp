#include <ios>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
#include <cstdlib>

std::string solve(std::string s)
{
    // cook our dish here John!
    std::unordered_map<char, int> letters;
    for (const char &letter : s)
    {
        letters[letter]++;
    }

    int maxCount = 0;
    for (const auto &pair : letters)
    {
        if (pair.second > maxCount)
        {
            maxCount = pair.second;
        }
    }
    
    if (2 * maxCount == s.size())
    {
        return "YES";
    }

    return "NO";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
    {
        std::string s;
        std::cin >> s;

        std::string res = solve(s);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
