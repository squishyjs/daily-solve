#include <iostream>
#include <string>
#include <vector>

std::string getBinaryParityBit(int n) {
    unsigned int count = 0;
    while (n > 0) {
        int least_significant_bit = n & 1; // returns 1 if rightmost bit is 1, else 0
        // also:
        /* 
        "&" is the bitwise AND operator. It converts the integer to its binary format.
        it then compares the bits of each bit for both binaries. For instance, "12 & 5":

          1100
        &
          0101
        --------
          0100
        
        The result returned is 4, since "0100" is four in decimal.
        It is called "bitwise" because it compares two integers 'bit by bit'
        */
        count += least_significant_bit;

        // shift binary of n to the right to check next bit
        // e.g. 8 -> 101
        // 8 >>= 1 -> 10
        n >>= 1;
    }
    return (count % 2 == 0 ? "EVEN" : "ODD");
}

int main() {
        
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;
        
        std::string result = getBinaryParityBit(n);
        std::cout << "Parity: " + result << std::endl;
    }
    return 0;
}
