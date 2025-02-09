#include <algorithm>
#include <iostream>
#include <ostream>
#include <pthread.h>
#include <vector>


int main() {
    /*
    Find the maximum length of a non-decreasing subarray.
    */
    int test_cases;
    std::cin >> test_cases;
    while (test_cases--) {

        // cook your dish here!
        int n, x;
        std::cin >> n >> x;

        std::vector<int> vector;
        for (int i = 0; i < n; ++i) { // input vector
            int integer;
            std::cin >> integer;
            vector.push_back(integer);
        }
        int max_length = 1, magical_number = 1;
        int global_max_length = 0;
        for (int i = 0; i < vector.size() - 1; ++i) {
            int curr_el = vector[i]; // check current element
            int next_el = vector[i + 1]; // check adjacent element
            if (next_el <= curr_el) {
                if (magical_number > 0) {
                    magical_number--; // use the magical number - same as magical_number = 0
                    int max_next_el = next_el * x;
                    if (max_next_el > curr_el) {
                        max_length++; // increment max_length
                    } else {
                        magical_number++; // same as magical_number = 1;
                        max_length = 1; // reset the current max length
                    }
                }
            } else {
                max_length++;
            }
            if (global_max_length < max_length)
                global_max_length = max_length;
            // iterate to next element
        }

        std::cout << global_max_length << std::endl;
    }

    /*
    Example edge case:
    Elements of vector include:
    n = vector.size() of the array 
    x = 1
    1 2 3 4 1 2 3 4 5 6
    Here, while we can use the magical number (1) on the 4ith position of our vector, by
    multiplying it by 1, this won't change the maximum outcome; hence our largest subarray
    thus far is "1-2-3-4", which has length 4. But if we start from the 4ith position, 
    including 1, we can find that the maximum subarray length here (without needing to even
    use the magical number, x) is actually 6. Hence our global_max_length here is 6
    */

    return 0;
}

// solution function
int getStreakLength(const std::vector<int>& vector) {
    int maxStreak = 1, currentStreak = 1;
    for (int i = 1; i < vector.size(); ++i) {
        if (vector[i] >= vector[i - 1]) {
            currentStreak++;
        } else {
            maxStreak = std::max(maxStreak, currentStreak);
            currentStreak = 1; // reset the currnet streak
        }
    }
    maxStreak = std::max(maxStreak, currentStreak); // update if exists higher streak
    return maxStreak;
}

signed int solutionMain() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, x;
        std::cin >> n >> x;

        std::vector<int> vector(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> vector[i];
        }

        int maxStreak = getStreakLength(vector); // function solver

        // try modifying each element -> check each new streak (longest non-decreasing subarray) value
        for (int i = 0; i < n; ++i) {
            std::vector<int> modifiedVector = vector;
            modifiedVector[i] = modifiedVector[i] * x; // apply magical number, and check

            maxStreak = std::max(maxStreak, getStreakLength(modifiedVector));
        }
        std::cout << maxStreak << std::endl;
    }

    return 0;
}
