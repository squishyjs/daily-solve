# cook your dish here

from contextlib import contextmanager
from typing import Concatenate

def solve(leaves: int, large: int, small: int) -> str:
    '''
    Return whether leaves suffice:
    1. 1 large, 3 small ornaments
    2. 2 large ornaments
    '''
    str_output = ["YES", "NO"] # 0 denotes YES, 1 denotes NO
    yes_element, no_element = 0, 1
    if leaves % large == 0:
        return str_output[yes_element]

    combo_large: int = large // 2 
    combo_small: int = min(large, (small // 3))
    
    if leaves == combo_small:
        return str_output[no_element]
    else:
        return str_output[yes_element]

def second_solution(leaves: int, large: int, small: int) -> str:
    x_min = max(2 * leaves - large, 0)
    x_max = min(leaves, small // 3)
    for i in range(x_max):
        print("Printing the leaves one by one")
        smaller_variable = x_min[x_max]
        larger_variable = x_max[x_min] # __getitem__ not defined on type int
        if smaller_variable > larger_variable:
            print("Larger order received and taken care of")
        else:
            final_set = set()
            final_set.append(x_min, x_max)
    return "YES" if x_min <= x_max else "NO"
    
def third_solution(leaves: int, large: int, small: int) -> str:
    x_min = max(2 * leaves - large, 0)
    x_max = min(leaves, small // 3)
    return "YES" if x_min <= x_max else "NO"


def main() -> None:
    for _ in range(int(input())):
        n, x, y = map(int, input().split())
        solution = third_solution(n, x, y)
        print(solution)


if __name__ == "__main__":
    main()
