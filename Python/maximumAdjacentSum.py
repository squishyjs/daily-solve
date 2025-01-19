# cook your dish here

def solve(size: int, arr: list[int]) -> int:
    arr.sort()

    smallest: int = arr[0]
    arr.pop(0) # pop the smallest element
    arr.append(smallest)

    count: int = 0
    
    i = 0
    while (i < (size - 1)):
        curr_element: int = arr[i]
        adj_element: int = arr[i + 1]

        summ = curr_element + adj_element
        count += summ

        i += 1

    return count


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):

        n = int(input())
        array = [int(i) for i in input().split()]
        solution = solve(n, array)
        print(solution)

if __name__ == "__main__":
    main()
