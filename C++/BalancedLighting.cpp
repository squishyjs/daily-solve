#include <iostream>
#include <vector>
#include <string>

#define NO "No"
#define YES "Yes"
const int RED       = 1;
const int BLUE      = 2;
const int UNDECIDED = 0;

std::string solve(int n, std::vector<int> &lights) {
    if (n == 1 || n % 2 != 0) {
        return NO;
    }
    /*
     * 1 = red, 2 = blue, 0 = undecided
    */
    int red = 0, blue = 0, none = 0;
    for (const int &light : lights) {
        switch (light) {
            case RED:
                red++;
                break;
            case BLUE:
                blue++;
                break;
            default:
                break;
        }
    }
    if ((red > n / 2) || (blue > n / 2)) {
        return NO;
    }
    return YES;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        std::vector<int> lights(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> lights[i];
        }
        std::string res = solve(n, lights);
        std::cout << res << std::endl;
    }
    return 0;
}
