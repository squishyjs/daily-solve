#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

#define debug(x) cerr << (#x) << " " << (x) << endl
#define endl '\n'
#define all(_a) _a.begin(), _a.end()
#define fast() \ 
    { std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); }

// void printVector(std::vector<int> &vector) {
//     for (const int &integer : vector) {
//         std::cout << integer << " ";
//     }
//     std::cout << std::endl;
// }

int solve(int flowers, int min, int days,
          std::vector<int> &grow) 
{
    std::sort(grow.begin(), grow.end());
    if (min >= flowers) {
        return 0;
    }

    int sum = 0, flag = 0;
    sum += (flowers - min);
    for (int i = 0; i < (flowers - min); ++i) {
        flag = floor(days / grow[i]);
        if (grow[i] * flag == days) {
            flag--;
            //debug(flag)
        }
        sum += flag;
    }
    return sum;
}

int main() {
    //speed up input and output executions
    fast();

    int testCases;
    std::cin >> testCases;
    while (testCases--) {

        int n, k, d;
        std::cin >> n >> k >> d;
        std::vector<int> grow(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> grow[i];
        }
        int result = solve(n, k, d, grow);
        std::cout << result << endl;
    }
    return 0;
}
