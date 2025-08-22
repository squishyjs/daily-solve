#include <iostream>
#include <vector>
#include <algorithm>

int solve(int n, int x, int y) {

    int oneVehicle = y / x;

    return (n + oneVehicle - 1) / oneVehicle;
}

int main() {

    int n, x, y;
    std::cin >> n >> x >> y;
    
    int res = solve(n, x, y);
    std::cout << res << std::endl;

    return 0;
}
