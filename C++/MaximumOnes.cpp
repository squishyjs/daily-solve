#include <iostream>
#include <string>
#include <vector>


void solve(int &length, int &ops, std::string &bstring) {
    int maxOnes = 0, zeros = 0;
    for (int i = 0; i < length; ++i) {
        char curr = bstring[i];
        if (curr == '1') {
            maxOnes++;
        }
        if (curr == '0') {
            zeros++;
        }
    }
    // for (int i = 0; i < length - 1; ++i) {
    //     char curr = bstring[i];
    //     char next = bstring[i + 1];
    //     if (curr != '1') {
    //         if (next == '1' && ops > 0) {
    //             maxOnes++;
    //             ops--;
    //         }
    //     }
    // }
    if (maxOnes == 0) {
        std::cout << 0 << std::endl;
    } else {
        int result = maxOnes + (std::min(zeros, ops));
        std::cout << result << std::endl; //the logic does not hold for when you have to revisist the binary string
    }
}

void solveOptimally(int length, int ops, const std::string &bstring) {
    std::string s = bstring;
    
    for (int k = 0; k < ops; k++) {
        bool changed = false;
        
        //find rightmost 0 that can be changed to 1
        for (int i = length - 2; i >= 0; i--) {
            if (s[i] == '0' && s[i+1] == '1') {
                s[i] = '1';
                changed = true;
                break;
            }
        }
        
        if (!changed) {
            break;
        }
    }
    
    int ones = 0;
    for (char c : s) {
        if (c == '1') {
            ones++;
        }
    }
    
    std::cout << ones << std::endl;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, k;
        std::cin >> n >> k;
        std::string bstring;
        std::cin >> bstring;

        solveOptimally(n, k, bstring);
    }
    return 0;
}
