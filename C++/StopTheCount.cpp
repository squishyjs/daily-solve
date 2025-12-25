#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define int64 long long
#define fastIO                            \
    ios::sync_with_stdio(false);          \
    cin.tie(nullptr);                     \
    cout.tie(nullptr);


int64 solve(int n, std::string &s) {
    #define WIN '1'

    int chef = 0, a_chef = 0, res = 0;
    for (const char &c : s)
    {
        if (c == WIN)
        {
            chef++;
        } else {
            a_chef++;
        }

        if (chef > a_chef)
        {
            res++;
        }
    }

    return res;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::cout << solve(n, s);
        std::cout << std::endl;
    }

    return 0;
}
