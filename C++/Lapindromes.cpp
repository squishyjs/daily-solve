#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cstdlib>

std::string solve(std::string s)
{
    int length = s.length();

    std::string firstH, secondH;
    if (length % 2 == 0) {

        int middle = length / 2;
        for (int i = 0; i < middle; ++i) {
            firstH += s[i];
        }

        for (int i = middle; i < length; ++i) {
            secondH += s[i];
        }

        std::sort(firstH.begin(), firstH.end());
        std::sort(secondH.begin(), secondH.end());
        
        if (firstH == secondH)
        {
            return "Yes";
        }

    } else {

        int middle = length / 2;
        std::string firstH, secondH;
        for (int i = 0; i < middle; ++i) {
            firstH += s[i];
        }

        for (int i = middle + 1; i < length; ++i) {
            secondH += s[i];
        }

        std::sort(firstH.begin(), firstH.end());
        std::sort(secondH.begin(), secondH.end());

        if (firstH == secondH)
        {
            return "Yes";
        }
    }

    return "No";
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
