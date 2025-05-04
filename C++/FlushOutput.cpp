#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

void solve(int people, int rating, std::vector<int> &ratings) {
    for (int i = 0; i < people; ++i) {
        if (ratings[i] < rating) {
            std::cout << "Bad boi\n";
        } else {
            std::cout << "Good boi\n";
        }
    }
}

int main() {
    // int testCases;
    // std::cin >> testCases;
    // while (testCases--) {
    int N, r;
    std::cin >> N >> r;
    std::vector<int> ratings(N);
    for (int &rating : ratings) {
        std::cin >> rating;
    }
    solve(N, r, ratings);
    // }
}
