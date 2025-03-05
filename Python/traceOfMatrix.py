import numpy as np
from typing import List
    

def compute_trace_matrix(matrix: List[int]):
    return [1]

def solution_two(matrix, matrix_size: int):
    matrix = np.array(matrix)
    n = matrix_size

    diagonal_sums = [matrix.trace()]
    for i in range(1, n):
        diagonal_sums.append(matrix[0:n-i, i:n])
        diagonal_sums.append(matrix[i:n, 0:n-i])

    return max(diagonal_sums)


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())
        matrix: List[List[int]] = []
        for row in range(n):
            matrix_row = [int(i) for i in input().split()]
            matrix.append(matrix_row)

        result: int = 0
        for i in range(n):
            temp: int = 0
            for j in range(n - i):
                temp += matrix[j + i][j]
            # udpate result with temp if larger
            result = max(temp, result)
        for j in range(1, n):
            temp: int = 0
            for i in range(n - j):
                temp += matrix[i][j + i]
            result = max(temp, result) 
        print(result)
        

if __name__ == "__main__":
    main()
