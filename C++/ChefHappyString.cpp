#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#include <cstdlib>

bool isVowel(char a)
{
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for (const auto vowel : vowels)
    {
        if (a == vowel)
        {
            return true;
        }
    }
    
    return false;
}

std::string solve(std::string s)
{
    int length = s.length();
    for (int i = 0; i < length; ++i)
    {
        int count = 0;
        for (int j = i; j < length; ++j)
        {
            if (isVowel(s[j]))
            {
                count++;
                if (count > 2)
                {
                    return "Happy";
                }
            } else {
                break; // stop counting if a non-vowel is encountered
            }
        }
    }

    return "Sad";
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        std::string s;
        std::cin >> s;

        std::string res = solve(s);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
