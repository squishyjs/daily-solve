#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>


std::vector<int> deleteNth(std::vector<int> arr, int n) {
    std::unordered_map<int, int> freq;

    for (size_t i = 0; i < arr.size(); ++i) {
        freq[arr[i]]++;
    }

    std::unordered_map<int, int> kept;
    for (auto it = arr.begin(); it != arr.end(); ) {
        int x = *it;

        if (kept[x] >= n) {
            it = arr.erase(it);
        } else {
            kept[x]++;           // keep it
            ++it;
        }
    }

    return arr;
}
