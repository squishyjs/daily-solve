# cook your dish here

def solve(x: int) -> str:
    return "YES" if x >= 10 else "NO"

def main() -> None:
    X = int(input())
    solution = solve(X)
    
    print(solution)

if __name__ == "__main__":
    main()
