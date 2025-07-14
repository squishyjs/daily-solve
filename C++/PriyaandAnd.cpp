#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <cstdlib>

int solve(int n, std::vector<int> &arr)
/* double traverse the array and do 
 * bitwise AND operator between
 * both the index elements
 * */
{
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int k = i + 1; k < n; ++k) {
            int bit = arr[i] & arr[k];

            if (bit == arr[i]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int t; std::cin >> t;
    while (t--) {

        int n; std::cin >> n;
        std::vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }

        int res = solve(n, arr);
        std::cout << res;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
