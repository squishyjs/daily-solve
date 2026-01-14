from typing import List, LiteralString, LiteralString

def solve(x: int, y: int) -> int:
    return x * y

def main() -> None:
    x, y = map(int, input().split())

    solution: int = solve(x, y)
    print(solution)


if __name__ == "__main__":
    main()
