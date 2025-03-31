#include <iostream>
#include <sys/resource.h>


const char ONE = '1';
const char ZERO = '0';

int minimumLength(int length, std::string binaryString) {
    /*
    Choose a non-empty contiguous substring and apply one of two operations:
    1. If ODD number of 1's, delete every 0
    2. If EVEN number of 1's, delete every 1
    */
    // if (length == 1) {
    //     return 1;
    // }
    //main loop
    int ones, zeros = 0;
    for (int i = 0; i < length; ++i) {
        if (binaryString[i] == ONE) {
            ones++;
        }
    }
    // //if there are no ones present -> cannot perform any action on string
    // if (ones == 0) {
    //     return length;
    // }
    // if (ones > 0  && ones % 2 == 0 && zeros == 0) {
    //     return 0;
    // }
    // return 1;
    if (ones % 2 != 0) {
        return 1;
    } else if (ones > 0) {
        return 0;
    }
    return ones;
}

int solution(int n, std::string string) {
    int length = n;
    int count = 0;
    for (char c : string) {
        if (c == '1') {
            count++;
        }
    }
    if (count & 1) {
        return 0;
    } else if (count > 0) {
        return 1;
    }
    return length;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        std::string binary; std::cin >> binary;

        int minLength = solution(n, binary);
        // std::cout << "The minimum length is: " << minLength << "\n";
        std::cout << minLength << std::endl;
    }
    return 0;
}
