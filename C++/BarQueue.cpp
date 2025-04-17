#include <iostream>
#include <string>
#include <vector>

const char BOY  = 'B';
const char GIRL = 'G';

int solve(int n, std::string &queue) {
    int boys = 0, girls = 0;
    for (char person : queue) {
        if (boys > (2 * girls)) {
            return boys + girls;
        }
        if (person == BOY) {
            boys++;
        } else {
            girls++;
        }
    }
    return boys + girls;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        std::string queue;
        std::cin >> queue;
        int answ = solve(n, queue);
        std::cout << answ << std::endl;
    }
    return 0;
}
