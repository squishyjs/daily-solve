#include <cstdio>
#include <iostream>
#include <vector>


void printvector(std::vector<int> &array) {
    for (const int &integer : array) {
        std::cout << integer << " ";
    }
    std::cout << std::endl;
}

void solve2(int &n, int &x) {
    if (n & 1) {
        std::cout << x << " ";
    }
    for (int i = 1; i <= (n / 2); ++i) {
        std::cout << x + i << " " << x - i << " ";
    }
    std::cout << std::endl;
}

std::vector<int> solve(int &n, int &x) {
    //1. -1000 <= A_i <= 1000 for all 1 <= i <= N
    //2. All A_i are DISTINCT
    //3. mean(A) = X
    std::vector<int> vec; //allocate memory for vec
    if (n == 1) {
        vec.push_back(x);
        return vec;
    }
    int total = n * x;
    int remainderones = n - 1;
    for (int i = 0; i < remainderones; ++i) {
        vec.push_back(1);
    }
    vec.push_back(total - remainderones);
    return vec;
}

int main() {
    int testcases;
    std::cin >> testcases;
    while (testcases--) {
        int n, x;
        std::cin >> n >> x;

        // std::vector<int> vec = solve(n, x);
        // printvector(vec);
        solve2(n, x);
    }
    return 0;
}
