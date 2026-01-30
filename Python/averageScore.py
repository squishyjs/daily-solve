def solve(x: float, y: float, z: float) -> float:
    return (x + y + z) // 3

def main() -> None:
    x, y, z = map(float, input().split())
    print(solve(x, y, z))

if __name__ == "__main__":
    main()
