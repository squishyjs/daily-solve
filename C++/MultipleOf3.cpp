#include <iostream>
#include <string>
#include <vector>

int solve(int integer) {
    if (integer % 3 == 0) {
        return integer;
    }

    return (integer + 1) / 3 * 3;
}

int main() {
 
    int integer;
    std::cin >> integer;
    int result = solve(integer);
    std::cout << result << std::endl;

    return 0;
}
