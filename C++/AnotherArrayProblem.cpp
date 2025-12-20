#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define fastIO                            \
    ios::sync_with_stdio(false);          \
    cin.tie(nullptr);                     \
    cout.tie(nullptr);

using int64 = long long;

int64 solve(int n, int64 arr[]) {
    // Small primes in increasing order (extend if you want).
    // This is the smallest-change way to make your approach correct.
    static const int primes[] = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
        73, 79, 83, 89, 97
    };

    for (int p : primes) {
        bool allDivisible = true;
        for (int i = 0; i < n; ++i) {
            if (arr[i] % p != 0) {   // then gcd(arr[i], p) == 1 (since p is prime)
                allDivisible = false;
                break;
            }
        }
        if (!allDivisible) return p;
    }

    return -1;
}

int main(void) {
    fastIO;

    static int64 arr[200000]; // big enough

    int q;
    std::cin >> q;

    while (q--) {
        int n;
        std::cin >> n;
        for (int i = 0; i < n; ++i)
        {
            std::cin >> arr[i];
        }

        std::cout << solve(n, arr) << "\n";
    }

    return 0;
}
