#include <ios>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <limits>

#define ll long long
#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \

using namespace std;
using int64 = long long;


std::vector<std::string> solve(int n,
                               std::vector<std::string> &arr)
{
    std::string pivot = "on";
    std::unordered_map<string, string> reverse_dir {
        {"Left", "Right"},
        {"Right", "Left"},
        {"Begin", "Begin"},
    };

    std::vector<string> dirs(n), roads(n);

    // reverse iterate
    for (int i = 0; i < n; ++i)
    {
        const std::string &s = arr[i];

        std::istringstream iss(s);
        std::string word;

        std::string before, after;
        bool is_pivot = false;
        while (iss >> word)
        {
            if (word == pivot && !is_pivot)
            {
                is_pivot = true;
            }
            else if (!is_pivot)
            {
                if (!before.empty()) before += " ";
                before += word;
            }
            else
            {
                if (!after.empty()) after += " ";
                after += word;
            }
        }

        dirs[i] = before;
        roads[i] = after;
    }

    // build reversed output
    std::vector<string> out;
    out.reserve(n);
    out.push_back("Begin on " + roads[n - 1]);

    for (int i = n - 1; i >= 1; --i)
    {
        out.push_back(reverse_dir[dirs[i]] + " on " + roads[i - 1]);
    }

    return out;
}

// faster parse
std::vector<std::string> solve_two(int n, std::vector<std::string> &arr)
{
    std::unordered_map<string, string> reverse_dir{
        {"Left", "Right"},
        {"Right", "Left"},
        {"Begin", "Begin"},
    };

    std::vector<string> dirs(n), roads(n);

    for (int i = 0; i < n; ++i) {
        const string &s = arr[i];
        size_t pos = s.find(" on ");
        dirs[i]  = s.substr(0, pos);
        roads[i] = s.substr(pos + 4);
    }

    std::vector<string> out;
    out.reserve(n);

    out.push_back("Begin on " + roads[n - 1]);
    for (int i = n - 1; i >= 1; --i) {
        out.push_back(reverse_dir[dirs[i]] + " on " + roads[i - 1]);
    }
    return out;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::vector<std::string> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::getline(std::cin, arr[i]);
        }
        std::vector<std::string> o = solve(n, arr);
        for (const string &s : o)
        {
             std::cout << s << "\n";
        }

        std::cout << std::endl;
    }

    return 0;
}
