#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> a(n);
        long long max_val = LLONG_MIN, max_freq = 0;
        
        // Reading input and finding the maximum value
        for (long long &x : a) {
            cin >> x;
            if (x > max_val) {
                max_val = x;
                max_freq = 1; // reset frequency for a new max
            } else if (x == max_val) {
                ++max_freq; // increment frequency of the current max
            }
        }

        // If only one element or the maximum occurs once
        if (n == 1 || max_freq == 1) {
            cout << "Marichka" << endl;
            continue;
        }

        // If the frequency of the maximum value is odd, Marichka wins
        if (max_freq % 2 == 1) {
            cout << "Marichka" << endl;
            continue;
        }

        // Count the frequency of all elements using a map
        map<long long, int> freq_map;
        for (long long x : a) {
            freq_map[x]++;
        }

        // Check if all elements have even frequencies
        bool all_even = true;
        for (const auto &entry : freq_map) {
            if (entry.second % 2 != 0) {
                all_even = false;
                break;
            }
        }

        // Output the result based on the frequency analysis
        if (all_even) {
            cout << "Zenyk" << endl;
        } else {
            cout << "Marichka" << endl;
        }
    }

    return 0;
}
