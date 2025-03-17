#include <iostream>

/*
Chef needs L minutes to write a page with his left hand, and 
R minutes to write a line of code with his right

Total satisfaction = no. of pages STARTED writing + number of
lines of code FINISHED writing
Determine Chef's total satisfaction
*/
void solve() {
    int L, R, M;
    std::cin >> L >> R >> M;

    int numberOfPagesWritten = M / L;
    int linesOfCodeWritten = M / R;

    int satisfaction = numberOfPagesWritten + linesOfCodeWritten;

    if (M % L != 0)
        satisfaction++;
    std::cout << satisfaction << std::endl;
}

int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}
