#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

static int solve(int n, const std::vector<int>& arr)
{
    int mismatchEvenStart = 0;
    int mismatchOddStart = 0;

    for (int i = 0; i < n; i++)
    {
        bool isEven = (arr[i] % 2 == 0);

        // Pattern: Even Odd Even Odd ...
        bool shouldBeEven = (i % 2 == 0);
        if (isEven != shouldBeEven)
            mismatchEvenStart++;

        // Pattern: Odd Even Odd Even ...
        bool shouldBeEven2 = (i % 2 == 1);
        if (isEven != shouldBeEven2)
            mismatchOddStart++;
    }

    return std::min(mismatchEvenStart, mismatchOddStart) / 2;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        std::cout << solve(n, arr);
        std::cout << "\n";
    }

    return 0;
}
