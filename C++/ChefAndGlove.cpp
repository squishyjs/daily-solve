#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

std::string solve(int n, std::vector<int> &fingers, std::vector<int> &sheaths)
{
    // cook
    bool front = true;
    bool back  = true;
    int i = 0;              // start
    int j = n - 1;          // end
    while (i < n && j >= 0)
    {
        int currentSheath = sheaths[i];
        if (fingers[i] > currentSheath)
        {
            front = false;
        }
        if (fingers[j] > currentSheath)
        {
            back = false;
        }

        i++;
        j--;
    }

    if (front && back)
    {
        return "both";
    } 
    else if (front && !back)
    {
        return "front";
    }
    else if (!front && back)
    {
        return "back";
    }

    return "none";
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> fingers(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> fingers[i];
        }
        std::vector<int> sheaths(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> sheaths[i];
        }

        std::string res = solve(n, fingers, sheaths);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
