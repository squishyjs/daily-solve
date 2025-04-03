#include <algorithm>
#include <cstdlib>
#include <iostream>
// #include <bits/stdc++.h>


void solve(int &x, int &y) {
    /*
     *Chef and Chefina are at positions X and Y on a number line
     It is known that badminton courts are located at every integer point
     They want to find a court such that the maximum distance travelled
     by either of them is minimized. Formally, they choose a court at 
     position Z, you need to find the minimum value of max(|X - Z|, |Y - Z|)
     across all possible choices of Z. Note that |X| denotes the absolute
     value of X
     Report this minimum value
    */
    int z = (x + y) / 2;
    std::cout << std::max(std::abs(x - z), std::abs(y - z)) << std::endl;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x, y;
        std::cin >> x >> y;
        solve(x, y);
    }
    return 0;
}
