# cook your dish here
def rotate_arr_right(arr: list[int], k: int) -> list[int]:
    k = k % len(arr)
    return arr[-k:] + arr[:-k]

def solve(n: int, arr: list[int]) -> int:
    max_sum: int = 0

    for _ in range(n):
        summ = arr[0] + arr[-1]
        if summ > max_sum:
            max_sum = summ

        # rotate array once
        arr = rotate_arr_right(arr, 1)

    return max_sum


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):

        n = int(input())
        array = [int(i) for i in input().split()]
        
        solution = solve(n, array)
        print(solution)


if __name__ == "__main__":
    main()
