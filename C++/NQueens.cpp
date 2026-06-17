#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::vector<std::string>> solveNQueens(const int N) {
    int n = N;

    std::vector<std::vector<std::string>> result;
    std::vector<std::string> board(n, std::string(n, '.'));

    std::vector<bool> columns(n, false);
    std::vector<bool> mainDiagonal(2 * n - 1, false); // row - col + n - 1
    std::vector<bool> antiDiagonal(2 * n - 1, false); // row + col

    auto backtrack = [&](auto&& self, int row) -> void {
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = n - 1; col >= 0; col--) {
            int mainDiagIndex = row - col + n - 1;
            int antiDiagIndex = row + col;

            if (columns[col] || mainDiagonal[mainDiagIndex] || antiDiagonal[antiDiagIndex]) {
                continue;
            }

            board[row][col] = 'Q';
            columns[col] = true;
            mainDiagonal[mainDiagIndex] = true;
            antiDiagonal[antiDiagIndex] = true;

            self(self, row + 1);

            board[row][col] = '.';
            columns[col] = false;
            mainDiagonal[mainDiagIndex] = false;
            antiDiagonal[antiDiagIndex] = false;
        }
    };

    backtrack(backtrack, 0);

    return result;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    return 0;
}
