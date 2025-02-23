#include <iostream>
#include <string>




int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;
        
        std::string restarauntName;
        std::cin >> restarauntName;
        
        bool flag = 0;
        for (int i = 0; i < n; ++i) {
            if (restarauntName[i] != 'z') {
                flag = 1;
            }
        }
        if (!flag) {
            std::cout << -1 << std::endl;
            continue;
        }
        //otherwise
        for (int i = 0; i < n; ++i) {
            std::cout << 'z';
        }
        std::cout << std::endl;
    }
    return 0;
}
