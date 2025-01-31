# cook your dish here

def solution(length: int, required: int, moves: str) -> int:
    count: int = 0
    for move in moves:
        if move == "S":
            count += 1
    if count >= required:
        return len(moves)
    deficit = required - count
    return length + (deficit - 1)

    
def main() -> None:
    for _ in range(int(input())):
        m, k = map(int, input().split())
        string = input()

        result = solution(m, k, string)
        print(result)

if __name__ == "__main__":
    main()
