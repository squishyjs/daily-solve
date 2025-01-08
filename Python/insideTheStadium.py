# cook your dish here

def solve(n: int, scores: list[int]) -> int:
    HUNDRED: int = 100
    count_hundred: int = 0
    runs: int = 0
    for i in range(n):
        runs += scores[i]

        if runs == i + 1:
            count_hundred += 1

    return count_hundred

def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        number = int(input())
        score_on_balls = [int(i) for i in input().split()]
        
        solution = solve(number, score_on_balls)
        print(solution)

if __name__ == "__main__":
    main()
