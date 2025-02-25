#include <iostream>


int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;
        
        const int WIN = 3;
        const int LOSE = 0;
        int winningTeam = (n - 1) * WIN;
        int losingTeam = ((n - 2) - (n - 2)/2);
        int difference = winningTeam - (losingTeam * 3);

        std::cout << difference << std::endl;
    }
    return 0;
}
