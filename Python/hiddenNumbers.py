# cook your dish here
def solve(n: int) -> int:
    return (1, n)


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())

        solution = solve(n)
        print(*solution)

if __name__ == "__main__":
    main()
