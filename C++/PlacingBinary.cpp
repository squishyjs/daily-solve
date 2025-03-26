#include <algorithm>
#include <iostream>


void solve(int &x, int &y) {
    //main solution
    int unique = 0;
    
    // int total = 2 * (x + y);
    int difference = std::abs(x - y);
    int result = std::min(x, y) * 2 + (difference * 2);

    if (difference > 0) { //this part does not make sense to me?
        result--;
    }
    std::cout << result << std::endl;
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x, y;
        std::cin >> x >> y;
        //cook your C++
        solve(x, y);
    }
    return 0;
}
