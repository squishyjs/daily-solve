#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cstdlib>

int solve(int n, int m, std::unordered_map<int,int> &mp) {
    // you have m marbles, numbered from 1..M
    // you have collected n marbles, where each
    // marble is denoted by arr[i], where i is
    // index from 1..n

    int count = 0;
    for (const auto i : mp) {
        count++;
    }

    return m - count;
}

int main() {
    // get input for each test case, 't'
    int t; std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m; // get input for m unique marbles and n marbles currently

        std::unordered_map<int,int> mp;
        for (int i = 0; i < n; ++i) {
            int a; std::cin >> a;
            mp[a]++;
        }

        int res = solve(n, m, mp);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
