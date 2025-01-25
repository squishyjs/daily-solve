# cook your dish here
def is_even(integer: int) -> bool:
    return integer % 2 == 0

def solution() -> None:
    test_cases = int(input())

    while (--test_cases):

        n, k = map(int, input().split())
        arr = [int(i) for i in input().split()]
        
        if is_even(sum(arr)) and k == 1:
            print("odd")
        else:
            print("even")

if __name__ == "__main__":
    solution() # solve
