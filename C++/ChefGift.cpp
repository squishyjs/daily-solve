#include <array>
#include <iostream>
#include <vector>


int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, k;
        std::cin >> n >> k;
        int array[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> array[i];
        }

        //iterate over array
        int countEven = 0;
        for (int i = 0; i < n; ++i) {
            if (array[i] % 2 == 0)
                countEven++;
        }

        if ((k != 0 && countEven >= k) || (k == 0 && countEven < n)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
