#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

using i64 = long long;

struct Slab {
    i64 width;   // size of this slab in currency units
    int rate;    // tax rate (%) for this slab
};

static const vector<Slab> kSlabs = {
    {250000, 0},   // 0% on first 2,50,000
    {250000, 5},   // 5% on next 2,50,000
    {250000, 10},  // 10% on next 2,50,000
    {250000, 15},  // 15% on next 2,50,000
    {250000, 20},  // 20% on next 2,50,000
    {250000, 25},  // 25% on next 2,50,000
};
// else anything above these slabs is taxed at 30%
static const int kTopRate = 30;

i64 computeTax(i64 income) {
    i64 remaining = income;
    i64 tax = 0;

    for (const auto& slab : kSlabs) {
        if (remaining <= 0) break;
        i64 taxable = min(remaining, slab.width);
        tax += (taxable * slab.rate) / 100; // integer math as in original
        remaining -= taxable;
    }

    if (remaining > 0) {
        tax += (remaining * kTopRate) / 100;
    }
    return tax;
}

void solveOne() {
    i64 income;
    cin >> income;

    const i64 tax = computeTax(income);
    const i64 netIncome = income - tax;
    cout << netIncome << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solveOne();
    }
    return 0;
}
