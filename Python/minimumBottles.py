# cook your dish here
import math
def solve(n: int, x: int, bottles: list[int]) -> int:
    bottles.sort(reverse=True)
    
    count: int = 0
    buffer: int = 0
    for bottle in bottles:
        if bottle == x:
            count += 1
            continue
        curr_buffer = buffer

        if curr_buffer == x:
            count += 1
            buffer = 0 # reset the buffer
        buffer += bottle   

    if buffer:
        count += 1
    return count

def solve_again(n: int, x: int, bottles: list[int]) -> int:
    if sum(bottles) < x:
        return 1
    return math.ceil(sum(bottles) / x)

def solution():
    test_cases = int(input())
    for _ in range(test_cases):
        n, x = map(int, input().split())
        bottles = [int(i) for i in input().split()]
        
        solution = solve_again(n, x, bottles)
        print(solution)

def main() -> None:
    solution()

if __name__ == "__main__":
    main()
