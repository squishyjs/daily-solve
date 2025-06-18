#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int solve(int n, int u, int d, std::vector<int> &arr) {
    // bound check arr
    if (n <= 2) {
        return 2;
    }

    int parachute = 1;
    int index = 1, i = 0;
    for (; i < n - 1; ++i) {
        if (arr[i] == arr[i + 1]) {             // same
            index++;
        }
        else if (arr[i + 1] < arr[i]) {         // lower hill
            int difference = arr[i] - arr[i + 1];
            if (difference <= d) {
                index++;
            } else if (parachute > 0) {
                index++;
                parachute--;    // break the parachute regardless?
            } else {
                break;
            }
        }
        else if (arr[i + 1] > arr[i]) {         // upper hill
            int difference = arr[i + 1] - arr[i];
            if (difference <= u) {
                index++;
            } else {
                break;
            }
        }
    }
    return index;
}

int resolve(int n, int u, int d, std::vector<int> &arr) {
    int parachute = 1, jump = 0;

    for (int i = 0; i < n - 1; ++i) {

        if (arr[i + 1] > (arr[i] + u)) {
            break;
        } else if (arr[i + 1] < (arr[i] - d)) {
            if (parachute) {
                // use parachute
                parachute--;
            } else {
                break;
            }
        }
        jump = i + 1;
    }
    
    return jump + 1;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        //when to use parachute?
        int n, u, d;
        std::cin >> n >> u >> d;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        int res = resolve(n, u, d, arr);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
