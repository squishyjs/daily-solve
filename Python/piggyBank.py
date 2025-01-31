# cook your dish here

def solution() -> None:
    n, k = map(int, input().split())

    print((n - k) * 10_000)

if __name__ == "__main__":
    solution()
