# cook your dish here

def solve(x: int, y: int) -> str:

    total_x = x * 1
    total_y = y * 2

    total_all = total_x + total_y

    return "YES" if total_all % 2 == 0 else "NO"

def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        x, y = map(int, input().split())

        solution = solve(x, y)
        print(solution)

if __name__ == "__main__":
    main()
