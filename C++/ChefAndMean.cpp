#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>


int main_second() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    bool flag = false;

    double originalMean = std::accumulate(nums.begin(), nums.end(), 0.0) / nums.size();

    // iterate
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        int currCoin = *it; // store value
        std::vector<int> temp = nums; // temp vector
        temp.erase(temp.begin() + (it - nums.begin())); // remove curr coin

        double newMean = std::accumulate(temp.begin(), temp.end(), 0.0) / temp.size(); // get new mean
        // check if means MATCH
        if (originalMean == newMean) {
            flag = true;
            // exit loop if coin found
            break;
        }
    }
    std::cout << (flag ? "true" : "false") << std::endl;
    
    return 0;
}

int solution() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;
        
        double mean = 0;
        std::vector<double> vector(n);
        for (int i = 0; i < n; ++i) {
            int element;
            std::cin >> element;
            vector[i] = element;
            mean += element;
        }
        mean = mean / n; // get vector mean
        // iterate
        bool flag = true;
        int coin = -1;
        for (int i = 0; i < n; ++i) {
            /*
            Essentially, if the current element in the vector is equal to the mean,
            we can discard it i.e. set the minimum coin value to the element, since
            removing will not disrupt the mean -> it is a modulo of the mean. Break
            the loop and set the flag and coin appropriately, before result output.
            */
            if (mean == vector[i]) {
                coin = i + 1; // set coin to vector index
                flag = false;
                break;
            }
        }
        if (coin != -1) {
            std::cout << coin << std::endl;
        } else {
            std::cout << "Impossible" << std::endl;
        }
    }

    return 0;
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;

        std::vector<int> vector;
        for (int i = 0; i < n; ++i) {
            int element;
            std::cin >> element;
            vector.push_back(element);
        }
        // sort vector
        std::sort(vector.begin(), vector.end());

        // get current sum of elements
        auto result = std::reduce(vector.begin(), vector.end());
        double mean = result / n; // calculate the mean
        
        int coin = 0;
        bool possibleToSteal = true;
        for (int i = 0; i < n; ++i) {
            /* 
            if current coin is removed && mean remains the same -> set coin to current coin
            else iterate
            if nothing found i.e coin = 0, print impossible
            if multiple coins -> get smallest coin
            so probably best to sort it first, then, iterate from the start,
            if coin found, break the loop and print it, otherwise return impossible
            */
            int current_coin = vector[i];


        }
        std::cout << (possibleToSteal ? std::to_string(coin) : "Impossible") << std::endl;
    }

    return 0;
}
