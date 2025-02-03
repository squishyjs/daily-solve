# cook your dish here
import math

def round_down_to_nearest_ten(number):
    return math.ceil(number / 10) * 10

def solve(payment: int) -> int:
    COST_OF_CAB: int = 100 # constant
    return COST_OF_CAB - round_down_to_nearest_ten(payment) # take the minimum payment in 10 dollar bills

def main() -> None:
    for _ in range(int(input())):
        x = int(input())
        solution = solve(x)
        print(solution)

if __name__ == "__main__":
    main()
