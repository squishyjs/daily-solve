from typing import List
    

def compute_trace_matrix(matrix: List[int]):
    return [1]

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
        for i in range(1, n):
            temp: int = 0
            for i in range(n - j):
                temp += matrix[i][j + i]
            result = max(temp, result)
        print(result)
        

if __name__ == "__main__":
    main()
