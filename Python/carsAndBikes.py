# cook your dish here
def has_bike(tires: int) -> bool:
    return tires % 4 != 0

def solve(tires: int) -> str:
    if has_bike(tires):
        return "YES"
    return "NO"

def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())
        solution = solve(n)
        print(solution)

if __name__ == "__main__":
    main()
