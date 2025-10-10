#include "bits-stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        // Find first and last '1'
        size_t l = S.find('1');
        if (l == string::npos) {
            cout << 0 << '\n';           // no black cells -> already contiguous
            continue;
        }
        size_t r = S.rfind('1');

        // Count zeros between l and r inclusive
        int flips = 0;
        for (size_t i = l; i <= r; ++i) {
            if (S[i] == '0') ++flips;
        }
        cout << flips << '\n';
    }
    return 0;
}
