// #include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define fastIO                                                    \
    std::ios::sync_with_stdio(false);                             \
    std::cin.tie(NULL);                                           \
    std::cout.tie(NULL);                                          \
    // std::cout.precision(std::numeric_limits<double>);

void print_array(std::vector<int> &arr)
{
    for (const auto &x : arr)
    {
         std::cout << x << " ";
    }

    std::cout << "\n";
}

void solve(int n, std::vector<int> &arr) {
    int odd = 0, even = 0;
    for (const int &x : arr)
    {
        if (x % 2 == 0)
        {
            even++;
        } else {
            odd++;
        }
    }

    if (odd > 0 && even > 0)
    {
        std::sort(arr.begin(), arr.end());
    }

    print_array(arr);
}

int main(void) {
    fastIO;
    int q;
    std::cin >> q;
    while (q--) {

        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }

        solve(n, arr);
    }

    return 0;
}
