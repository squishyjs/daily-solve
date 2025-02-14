#include <iostream>


int main() {
    
    int x, y;
    std::cin >> x >> y;

    int total_time_penalty = x + (y * 10);

    std::cout << total_time_penalty << std::endl;

    return 0;
}
